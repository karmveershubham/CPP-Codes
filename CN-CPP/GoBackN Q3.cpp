#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

class go_back_n{
    private:
        int n, size, m;
        int * window;
    public:
        go_back_n(int num, int mm){
            n = num;
            m = mm;
            size = pow(2,m) - 1;
            window = new int [size];
        }
        void change_win(int curr){
            if(curr+size > n){
                window = new int [n-curr+1];
                for(int i=0; i<n-curr+1; i++){
                   window[i]=curr+i;
                }
            }
            else{
                for(int i=0; i<size; i++){
                   window[i]=curr+i;
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
            cout<<"\t\tData lost for frame "<<curr<<"\nSending window again\n";
        }
        void acklost(int curr){
            cout<<"\t\tAcknowledgement lost for frame "<<curr<<"\nSending window again\n";
        }
        void ackdelay(int curr){
            cout<<"\t\tAcknowledgement delay for frame "<<curr<<"\nSending window again\n";
        }
        void ackrecieved(){
            getch();
            cout<<"\nAcknowledgement recieved\n";
        }
        void recieve(int curr){
            cout<<"\n\t\t\t\t"<<curr+1<<"th frame recieved\n\t\t\t\tSending acknowledgement "<<(curr+1)%(size+1);
        }
        void display(){
            cout<<"Sender's side\t\t\tReciever's side"<<endl;
            int curr = 0;
            change_win(curr);
            while(curr!=n){
                srand(time(0));
                int prob = rand()%4;
                cout<<"Sending frames ";
                display_win(curr);
                cout<<endl;
                getch();
                switch(prob){
                    case 0:
                        datalost(curr);
                        break;
                    case 1:
                        acklost(curr);
                        break;
                    case 2:
                        ackdelay(curr);
                        break;
                    case 3:
                        recieve(curr);
                        ackrecieved();
                        curr++;
                        change_win(curr);
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
    go_back_n gbn(n, m);
    cout<<endl;
    gbn.display();
    getch();
    return 0;
}
