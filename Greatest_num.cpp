#include <iostream>
using namespace std;


float greatest(float n1,float n2,float n3 )
{

    if (n1 >= n2) {
        if (n1 >= n3)
            return n1;
        else
            return n3;
    }
    else {
        if (n2 >= n3)
            return n2;
        else
            return n3;
    }
}


int main() 
{

    char n;
	do{

        float n1,n2,n3;
        cout<<"To find the greatest of three numbers."<<endl;
        cout << "Enter three numbers: ";
        cin >> n1 >> n2 >> n3;

        float result;
        result=greatest(n1,n2,n3);

        cout<<"The gretest number is: "<<result<<endl;


		cout<<"\nDo you want to continue?....(y/n)";
		cin>>n;

	}while(n=='Y' or n=='y');
	
	cout<<"Thanks."<<endl;

    return 0;
}