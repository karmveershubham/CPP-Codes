#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;

class crc{
    private:
        string data, key;
        int data_sz, key_sz;
    public:
        crc(int dt_sz=0, string dt="", int gen_sz=0, string gen=""){
            data=dt;
            key=gen;
            data_sz=dt_sz;
            key_sz=gen_sz;
        }
        void input(){
            cout<<"Enter frame size: ";
            cin>>data_sz;
            cout<<"Enter the frame: ";
            cin>>data;
            cout<<"Enter generator size: ";
            cin>>key_sz;
            cout<<"Enter generator: ";
            cin>>key;
        }
        void display(){
            cout<<"\nSender's side:\n";
            cout<<"Frame: "<<data<<"\n";
            cout<<"Generator: "<<key<<"\n";
            string codeword=send();
            cout<<"CRC bits: "<<codeword<<"\n";
            data+=codeword;
            cout<<"Transmitted frame: "<<data<<"\n\n";
            char noise='n';
            cout<<"If your transmission channel is noisy, press 'y'";
            cout<<"If your transmission channel is noiseless, press 'n'";
            cin>>noise;
            if(noise=='y')
                noisy();
            cout<<"\nReceiver's side:\n";
            cout<<"Data received: "<<data<<"\n";
            string rem=receive();
            cout<<"Remainder: "<<rem<<"\n";
            if(check_rem(rem))
                cout<<"Correct message received"<<endl;
            else
                cout<<"Incorrect message received"<<endl;
        }
        bool check_rem(string rem){
            for(int i=0; i<rem.size(); i++)
                if(rem[i]=='1')
                    return false;
            return true;
        }
        string xor_func(string data1, string data2){
            int len=data1.size();
            while(len!=-1){
                if(data1[len]==data2[len])
                    data1[len]='0';
                else
                    data1[len]='1';
                len--;
            }
            return data1;
        }
        string send(){
            string new_data=data;
            string res="", empty="";
            for(int i=0; i<key_sz-1; i++){
                empty+='0';
                res+=new_data[i];
            }
            new_data+=empty;
            empty+='0';
            for(int i=0; i<data_sz; i++){
                res+=new_data[i+key_sz-1];
                if(res[0]=='0')
                    res=xor_func(res,empty);
                else
                    res=xor_func(res,key);
                res.erase(0,1);
            }
            return res;
        }
        void noisy(){
            srand(time(0));
            data[rand()%data_sz]='1';
        }
        string receive(){
            string new_data=data;
            string res="", empty="";
            for(int i=0; i<key_sz-1; i++){
                empty+='0';
                res+=new_data[i];
            }
            empty+='0';
            for(int i=0; i<data_sz; i++){
                res+=new_data[i+key_sz-1];
                if(res[0]=='0')
                    res=xor_func(res,empty);
                else
                    res=xor_func(res,key);
                res.erase(0,1);
            }
            return res;
        }
};

int main(){
    crc msg;
    msg.input();
    msg.display();
    getch();
    return 0;
}