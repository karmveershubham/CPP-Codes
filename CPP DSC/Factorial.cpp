#include <iostream>
using namespace std;


int iterative(int num)
{
    int s=1;
	for(int i=1; i<=num; i++){
        s=s*i;
	}
    return s;
}


int recursion(int num)
{
    if (num==0 or num==1){
        return 1;
    }
    else{
        return (recursion(num-1)*num);
    }
}


int main() 
{
    char n;
	do{
        int num;
        cout<<"Enter a number to get factorial: ";
        cin>>num;
        if (num>=0){

            cout<<"\nMethod\n1.Iterative"<<endl;
            cout<<"2.Recursion.\n";

            int ch;
            cout<<"\nEnter your choice: ";
            cin>>ch;

            if (ch==1) {
                int result1;
                result1=iterative(num);
                cout<<"\nThe factorial of "<<num<<" is: "<<result1<<endl;
            }else if (ch==2) {
                int result2;
                result2=recursion(num);
                cout<<"\nThe factorial of "<<num<<" is: "<<result2<<endl;
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
