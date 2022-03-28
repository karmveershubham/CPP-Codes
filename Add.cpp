/* multiline comment using (/*) to understand 
basics of c++
it is very interesting */

#include <iostream>
using namespace std;

int main(){ 
	int x;   //int x=8;
	int y;   //int y=9;
	 
	x=8;
	y=9;
	
	cout <<" The sum of "<< x << " + " << y << " = "<<x+y<<endl;
	

	int a,b,res;   	// declaring int in one line
	char ch='D';
	string  str = "ABFhtyj";
	
	cout<<sizeof(float)<<endl;
	cout<<"\nEnter First Number ";
	cin>>a;
	cout<<"Enter Second number ";
	cin>>b;
	res=a+b;
	cout<<"Sum of "<< a << " + " << b << " = "<< res;
	
	return 0;
	
}
