#include<iostream>
using namespace std;

//creating class
class Prime
{
    //function for checking prime numbers.
    public:
        int Check_prime(int n) 
        {
            int i;
            for (i=2; i<n; i++){
                if(n%i==0){
                    cout<<"The given number is Non prime"<<endl;
                    break;
                }
            }
            if (i==n){
                cout<<"The given number is Prime"<<endl;
            }
        }

    //function for printing prime numbers in given range.
        int Print_prime(int n) {

            for(int num=2; num<=n; num++) {
                int i;
                for (i=2; i<num; i++) {
                    if (num%i==0){
                        break;
                    }
                }
                if (i==num){
                    cout<<num<<" ";
                }
            }
        }

};

int main() 
{
    //creating object for prime class 
    Prime p;

    char n;
	do{

        //getting input
        int num;
        cout<<"Enter the value of n: ";
        cin>>num;
        if (num>0){

            cout<<"\nTo find\n1.To check given number is prime or not. "<<endl;
            cout<<"2.Print prime numbers in given range. \n";

            int ch;
            cout<<"\nEnter your choice: ";
            cin>>ch;
            
            //calling functions according to choices.
            if (ch==1) {

                if(num==1){
                    cout<<"The Number is not prime.";
                }else {
                p.Check_prime(num);
                }
            }else if (ch==2) {

                if(num==1){
                    cout<<"No prime numbers in the given range.";
                }else {
                    cout<<"The prime numbers in range "<<num<<" is/are: ";
                    p.Print_prime(num);
                    cout<<endl;
                }

            } else{
                cout<<"Enter a valid choice"<<endl;
            } 
        }

        else{
            cout<<"Enter positive number."<<endl;
        }

		cout<<"\nDo you want to continue?....(y/n):  ";
		cin>>n;

	}while(n=='Y' or n=='y');
	
	cout<<"Thanks."<<endl;

    return 0;
}

