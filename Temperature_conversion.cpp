#include <iostream>
using namespace std;

int main() {
	
	char ch;
	cout<<"Conversion Menu\n" ;
    cout<<"A.Fahreheit to Celcius  \nB.Celcius To Fahrenheit  "<<endl;

    char n;
	do {

		cout <<"Enter your choice.(A or B): \n";
		cin>>ch;
		
        float num;

	    switch(ch) {
		    case 'A':
		    case 'a':
                cout<<"Enter the temperature in Fahrenheit: ";
                cin>>num;
                cout <<num<<" F "<<"is equal to "<<((num-32)*5)/9<<" C "<<endl;
			    break;
			
		    case 'B':
		    case 'b':
                cout<<"Enter the temperature in Celcius: ";
                cin>>num;
                cout <<num<<" C "<<"is equal to "<<(num*9/5)+32<<" F "<<endl;
			    break;

		    default:
			    cout<<"Inavalid Choice\nPlease try Again.\n";
				
		    	  
		}
		cout<<"Do you want to continue?(y/n): ";
    	cin>>n;

	}while (n=='y' or n=='Y');

    cout<<"\nBYE!";				

	return 0;
}
