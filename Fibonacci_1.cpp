#include <iostream>
using namespace std;

int fibonacci (int n) {

    if (n==1){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }

}

int main() {

    char n;
	do{
		int num;
		cout<<"Enter the value of n for fibonacci sequence : "<<endl;
		cin>>num;

		if (num>0){
            cout<<"\nThe fibonacci sequence :"<<endl;
            int i;
            for (i=1;i<num;i++){ 
                cout<<fibonacci(i)<<",";
            }
            cout<<fibonacci(num)<<endl;
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