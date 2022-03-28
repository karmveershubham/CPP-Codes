//program for calculating grades 

#include <iostream>
using namespace std;

//creating class
class Grade{
	private:
		int sub1,sub2,sub3,sub4;
		float avg;
	public:
		//getting inputs
		void getdata(){
			cout<<"Enter the marks of sub1: ";
			cin>>sub1;
			cout<<"Enter the marks of sub2: ";
			cin>>sub2;
			cout<<"Enter the marks of sub3: ";
			cin>>sub3;
			cout<<"Enter the marks of sub4: ";
			cin>>sub4;
		}
		//displaying data
		int display(){
            if(sub1>100 or sub2>100 or sub3>100 or sub4>100){
                cout<<"\nMaximum marks is 100 enter valid marks."<<endl;
                return -1;
            }
			avg=float((sub1+sub2+sub3+sub4)/4);
			cout<<avg<<endl;
			if(avg<=100 && avg>89){
				cout<<"\nThe grade obtained is A"<<endl;
			}
			else if(avg<=89 && avg>79){
				cout<<"\nThe grade obtained is B"<<endl;
			}
			else if(avg<=79 && avg>65){
				cout<<"\nThe grade obtained is C"<<endl;
			}
			else if(avg<=65 && avg>50){
				cout<<"\nThe grade obtained is D"<<endl;
			}
			else{
				cout<<"\nThe grade obtained is E"<<endl;
			}
		}
};


int main()
{
    ///creating object of class
	Grade gr;
	char c='y';
	while(c=='y' or c=='Y'){

		//calling functions
        gr.getdata();
        gr.display();

	cout<<"\nIF YOU WANT TO CONTINUE PRESS Y ELSE PRESS ANY KEY : ";
	cin>>c;

    }
    cout<<"Thanks!";
} 
