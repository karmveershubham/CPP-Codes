#include <iostream>
using namespace std;

int main() {
	
	int marks1, marks2, marks3;
	cout<<"Enter your marks in Subject_1:   ";
	cin>>marks1;
	cout<<"Enter your marks in Subject_2:   ";
	cin>>marks2;
	cout<<"Enter your marks in Subject_3:   ";
	cin>>marks3;
	
	float res;
	res=(marks1+marks2+marks3)/3;
	cout <<"Total Marks: "<<(marks1+marks2+marks3)<<endl;
	cout<< "Percentage Scored: "<<res<<endl;
	
	if (res>=90) {
		cout<<"You got Grade A";		
	}
	else if (res>=70) {
		cout<<"You got Grade B";
	}
	else if (res>=50) {
		cout <<"You got Grade C";
	}
	else {
		cout <<"you got Grade D";
		
	}
	
	return 0;
}
