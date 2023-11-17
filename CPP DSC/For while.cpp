#include <iostream>
using namespace std;

int main() {
	
	int i;
	for(i=0;i<5;i++) {  //1st initialiser 2nd condition 3rd increment
		cout<<i <<endl;
	}
	
	cout<<"\n";
	
	i=0;
	while(i<5) {  
		cout<<i<<endl;
		i++;
	}
	
	i=0;
	do { 
		cout <<"\n"<<i<<endl;
		i++;
	}while (i<0);
	
	
	return 0;
}
