#include<iostream>
using namespace std;

int main()
{	
    char n;
	do{

		float num;
		cout<<"Enter the number to get factorial."<<endl;
		cin>>num;
		if (num>0){

        int s=1;
		for(int i=1; i<=num; i++){
            s=s*i;
		}
        cout<<"The factorial of "<<num<<" is: "<<s<<endl;
        }
        else{
            cout<<"Enter positive Number. "<<endl;
        }

		cout<<"\nDo you want to continue?....(y/n)";
		cin>>n;
	}while(n=='Y' or n=='y');
	
	cout<<"Thanks."<<endl;
	
	return 0;		
}
