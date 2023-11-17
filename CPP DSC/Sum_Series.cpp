#include<iostream>
using namespace std ;

int sum_series(int n){

    //when n is odd
    if (n%2==1){
        return (n+1)/2;
    }
    //when n is even
    else{
        return -n/2;
    }
}

int main()
{	
    char n;
	do{
		int num;
		cout<<"Enter the value of n for series 1-2+3-4.......n  : "<<endl;
		cin>>num;

		if (num>0){
            int res;
            res=sum_series(num);
            cout<<"The result of series is: "<<res<<endl;
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