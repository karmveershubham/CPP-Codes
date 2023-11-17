
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

class selective_repeat{
    private:
        int n, size, m, seq;
        int * window;
    public:
        selective_repeat(int num, int win_sz){
            n = num;
            m = win_sz;
            seq = pow(2,m) - 1;
            size = pow(2,m-1);
            window = new int [size];
        }
        void change_win(int curr){
            if(curr+size > n){
                window = new int [n-curr+1];
                for(int i=0; i<n-curr+1; i++){
                   window[i]=(curr+i)%(seq+1);
                }
            }
            else{
                for(int i=0; i<size; i++){
                   window[i]=(curr+i)%(seq+1);
                }
            }
        }
        void display_win(int curr){
            int new_sz = size;
            if(curr+size > n){
                new_sz=n-curr;
            }
            for(int i=0; i<new_sz; i++)
                cout<<window[i]<<" ";
            cout<<endl;
        }
        void datalost(int curr){
            cout<<"\t\tData lost for frame "<<curr<<"\nSending frame "<<curr<<" again\n";
        }
        void acklost(int curr){
            cout<<"\t\tAcknowledgement lost for frame "<<curr<<"\nSending frame "<<curr<<" again\n";
        }
        void ackdelay(int curr){
            cout<<"\t\tAcknowledgement delay for frame "<<curr<<"\nSending frame "<<curr<<" again\n";
        }
        void ackrecieved(){
            getch();
            cout<<"\nAcknowledgement recieved\n";
        }
        void recieve(int curr){
            cout<<"\n\t\t\t\t"<<curr+1<<"th frame recieved\n\t\t\t\tSending acknowledgement "<<(curr+1)%(seq+1);
        }
        void display(){
            cout<<"Sender's side\t\t\tReciever's side"<<endl;
            int curr = 0;
            change_win(curr);
            int prob = 3;
            while(curr!=n){
                cout<<"Current window:";
                display_win(curr);
                srand(time(0));
                if(prob==3){
                    if(size+curr<=n){
                        cout<<"Sending frame ";
                        if(curr==0)
                           display_win(curr);
                        else
                            cout<<curr+size-1;
                    }
                    cout<<endl;
                }
                prob=rand()%4;        
                getch();
                switch(prob){
                    case 0:
                        cout<<endl;
                        datalost(curr);
                        break;
                    case 1:
                        cout<<endl;
                        acklost(curr);
                        break;
                    case 2:
                        cout<<endl;
                        ackdelay(curr);
                        break;
                    case 3:
                        recieve(curr);
                        ackrecieved();
                        curr++;
                        change_win(curr);
                        if(curr+size<=n)
                            cout<<"Sliding window\n";
                        break;
                }
            }
            cout<<"\n\nAll frames sent"<<endl;
        }
};

int main(){
    int n, m;
    cout<<"Enter the number of frames: ";
    cin>>n;
    cout<<"Enter the value of m bit: ";
    cin>>m;
    selective_repeat sr(n, m);
    cout<<endl;
    sr.display();
    getch();
    return 0;
}
