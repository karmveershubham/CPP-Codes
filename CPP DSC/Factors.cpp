//Program for calculating factors of number.
#include<iostream>
using namespace std;

//creating factor class 
class factor
{
    private:
        int n;

    public:
        int display(int n)
        {
            for(int i=1;i<=n;i++){
                if(n%i==0){
                    cout<<i<<" ";
                }   
            }
        }
};

int main(){

    factor obj;
    char ch='y';
    do{
        int num;
        cout<<"Enter a number to get factor.";
        cin>>num;

        if(num>0) {
            //calling function
            cout<<"The factors of "<<num<< " are: ";
            obj.display(num);
            cout<<endl;
        }
        else{
            cout<<"Enter positive number."<<endl;
        }

        cout<<"\nTo continue for another values press Y"<<endl;
        cin>>ch;
    }while(ch=='y' or ch=='Y');
    cout<<"\nThanks.";
    return 0;
}
