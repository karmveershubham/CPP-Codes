
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{	
    char n;
	do{

		float num;
		cout<<"Enter the number"<<endl;
		cin>>num;
		
		cout<<"The Table of "<<num<<" is"<<endl;
		for(int i=1; i<=10; i++){
			
			cout<<num<<" X "<<setw(2)<<i<<" = "<<setw(4)<<num*i<<endl;
		}
		
		cout<<"\nDo you want to continue?....(y/n)";
		cin>>n;
	}while(n=='Y' or n=='y');
	
	cout<<"Thanks."<<endl;
	
	return 0;		
}