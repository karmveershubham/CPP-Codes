#include <iostream>
using namespace std;

int main() {
	
	int num1,num2;
	char ch;
	cout << "Enter two numbers: ";
	cin>>num1>>num2;
	cout<<"A.Addition \nB.Subtraction \nC.Multplication \nD.Division\n";
	cout <<"Enter your choice.(A-D): \n";
	cin>>ch;
	
	switch(ch) {
		case 'A':
		case 'a':
		case 1:
			cout<<"Addition of " <<num1<<" And "<< num2 <<" is "<<num1+num2<<endl;
			break;
			
		case 'B':
		case 'b':
		case 2:
			cout<<"Subtraction of " <<num2<<" from "<<num1 <<" is "<<num1-num2<<endl;
			break;
			
		case 'C':
		case 'c':
		case 3:
			cout<<"Multiplication of " <<num1<<" And "<<num2<<" is "<<num1*num2<<endl;
			break;
			
		case 'D':
		case 'd':
		case 4:
			cout<<"Division of " <<num1<<" by "<<num2<<" is "<<num1/num2<<endl;
			break;
			
		default:
			cout<<"Inavalid Choice\nPlease try Again.\n";
			
				
	}
	return 0;
}
