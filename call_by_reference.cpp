#include <iostream>
using namespace std;

// function definition to swap values
void swap(int &x, int &y) {
    int swapx;
    swapx = x;
    x = y;
    y = swapx;
}

int main()
{
	//taking input
    char ch='y';
    do{
        int a,b;
        cout<<"Enter the first value.: ";
        cin>>a;
        cout<<"Enter the second value.: ";
        cin>>b;

        // call function to swap numbers
        swap(a, b);

        cout << "\nAfter swapping" << endl;
        cout << "first Value = " << a << endl;
        cout << "Second value = " << b << endl;

        cout<<"If you want to continue press Y else press any key."<<endl;
        cin>>ch;
    }while(ch=='y' or ch=='Y');
    cout<<"Thanks!"<<endl;
    return 0;
}
