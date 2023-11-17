#include <iostream>  
using namespace std; 

int swap_2v(int num1, int num2) {

    //displaying numbers before swapping
	cout<<"\nBefore Swapping: First Number: "<<num1<<" Second Number: "<<num2;    
    
    //swapping
    num1=num1*num2;  
    num2=num1/num2;   
    num1=num1/num2;    
    
    //displaying numbers after swapping
	cout<<"\nAfter Swapping: First Number: "<<num1<<" Second Number: "<<num2<<endl;   

} 

int swap_3v(int num1, int num2)
{
    int temp; //third variable.

    //displaying numbers before swapping
    cout<<"\nBefore Swapping: First Number: "<<num1<<" Second Number: "<<num2;

    //swapping
    temp=num1;
    num1=num2;
    num2=temp;

    //displaying numbers after swapping
    cout<<"\nAfter Swapping: First Number: "<<num1<<" Second Number: "<<num2<<endl;
}

int main() 
{

    char n;
	do{
        
        //taking input
        int num1,num2;
		cout<<"Enter the first value.: "<<endl;
		cin>>num1;
        cout<<"Enter the second value.: "<<endl;
		cin>>num2;

		//giving choices
        cout<<"\nTo find\n1 swap without third variable. "<<endl;
        cout<<"2.swap with third variable.\n";

        int ch;
        cout<<"\nEnter your choice: ";
        cin>>ch;

        if (ch==1) {
        	//caling function
            swap_2v(num1,num2);
        }
        else if (ch==2) {
        	//caling function
            swap_3v(num1,num2);
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
