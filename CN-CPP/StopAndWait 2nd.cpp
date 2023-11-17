#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;

class stop_n_wait{
    private:
        int n;
    public:
        stop_n_wait(int num){
            n=num;
        }
        void datalost(){
            cout<<"\t\tData lost\nSending data again\n";
        }
        void acklost(){
            cout<<"\t\tAcknowledgement lost\nSending data again\n";
        }
        void ackdelay(){
            cout<<"\t\tAcknowledgement delay\nSending data again\n";
        }
        void ackrecieved(){
            getch();
            cout<<"\nAcknowledgement recieved\n";
        }
        void recieve(int curr){
            cout<<"\n\t\t\t\tFrame "<<curr+1<<" recieved\n\t\t\t\tSending acknowledgement "<<(curr+1)%2;
        }
        void display(){
            cout<<"Sender's side\t\t\tReciever's side"<<endl;
            int curr = 0;
            while(curr!=n){
                srand(time(0));
                int prob = rand()%4;
                cout<<"Sending frame "<<curr<<"\n";
                getch();
                switch(prob){
                    case 0:
                        datalost();
                        break;
                    case 1:
                        acklost();
                        break;
                    case 2:
                        ackdelay();
                        break;
                    case 3:
                        recieve(curr);
                        ackrecieved();
                        curr++;
                        break;
                }
            }
            cout<<"\n\nAll frames sent"<<endl;
        }
};

int main(){
    int n;
    cout<<"Enter the number of frames: ";
    cin>>n;
    stop_n_wait snw(n);
    cout<<endl;
    snw.display();
    getch();
    return 0;
}
