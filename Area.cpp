#include<iostream>
using namespace std;

float area(float l, float b){
    return l*b;
}

float area(float s){
    return s*s;
}

double area(double b,double h){
    return 0.5*b*h;
}

int main()
{
    char n;
	do{

        cout<<"Menu";
        cout<<"\n1.Area of Recatangle.\n2.Area of Square."<<endl;
        cout<<"3.Triangle.\n";

        int ch;
        cout<<"\nEnter your choice: ";
        cin>>ch;

        if (ch==1) {
            float l,b;
            cout<<"Enter length and Breadth: ";
            cin>>l>>b;
            cout<<"Area of Rectangle = "<<area(l,b)<<" sq. unit"<<endl;

            
        }else if (ch==2) {
            float s;
            cout<<"Enter the side: ";
            cin>>s;
            cout<<"Area of Square = "<<area(s)<<" sq. unit"<<endl;

        
        }else if (ch==3) {
            double b,h;
            cout<<"Enter base and height: ";
            cin>>b>>h;
            cout<<"Area of Triangle = "<<area(b,h)<<" sq. unit"<<endl;

        }
        
        else{
            cout<<"Enter a valid choice"<<endl;
        } 

        cout<<"\nDo you want to continue?....(y/n):  ";
        cin>>n;

	}while(n=='Y' or n=='y');
	
	cout<<"Thanks."<<endl;
    return 0;
}