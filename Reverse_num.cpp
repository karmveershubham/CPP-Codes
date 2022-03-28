#include <iostream>
using namespace std;


int reverse(int num)
{
    int reverse_num=0,rem;
    while (num!=0) {
        rem=num%10;
        reverse_num=reverse_num*10+rem;
        num/=10;  //    num=num/10
    }
    return reverse_num;
}


int digit_sum(int num)
{
    int sum=0;
    while(num!=0) {
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
}


int main() 
{

    char n;
	do{

        int num;
        cout<<"Enter a number: ";
        cin>>num;

        cout<<"\nTo find\n1.Reverse the number"<<endl;
        cout<<"2.Calculate sum of digits of number.\n";

        int ch;
        cout<<"\nEnter your choice: ";
        cin>>ch;

        if (ch==1) {
            int result1;
            result1=reverse(num);
            cout<<"\nThe reverse of "<<num<<" is: "<<result1<<endl;
        }else if (ch==2) {
            int result2;
            result2=digit_sum(num);
            cout<<"\nThe sum of digits of "<<num<<" is: "<<result2<<endl;
        } else{
            cout<<"Enter a valid choice"<<endl;
        } 

		cout<<"\nDo you want to continue?....(y/n):  ";
		cin>>n;

	}while(n=='Y' or n=='y');
	
	cout<<"Thanks."<<endl;

    return 0;
}
