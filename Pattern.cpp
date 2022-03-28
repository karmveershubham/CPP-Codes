#include <iostream>
using namespace std;

//function for pattern
int pattern(int n){
	for(int i=1; i<=n; i++){ 
		for (int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;		
	} 
}
int main(){
	char a='y';
	while(a=='y' or a=='Y'){

		//getting input
		int n;
		cout<<"\nEnter the number of lines for pattern: ";
		cin>>n;
		
		//handling negative or 0 inputs.
		if(n>0){
			pattern(n);
		}else{
			cout<<"\nEnter positve number.";
		}
		
		cout<<"\nDo you want to continue.";
		cin>>a;
	}
    
    cout<<"\nThanks"<<endl;
    
	return 0;
}
