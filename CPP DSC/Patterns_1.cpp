#include <iostream>
using namespace std;

//creating class
class print_pattern {
public:
    int Triangle (int rows)
    {
        int space;
        for(int i = 1, k = 0; i <= rows; ++i, k = 0)
        {
            for(space = 1; space <= rows-i; ++space)
            {
                cout <<"  ";
            } 
            while(k != 2*i-1)
            {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }    
        return 0;
    }

    int Inv_Triangle(int rows )
    {
        for(int i = rows; i >= 1; --i)
        {
            for(int space = 0; space < rows-i; ++space)
                cout << "  ";

            for(int j = i; j <= 2*i-1; ++j)
                cout << "* ";

            for(int j = 0; j < i-1; ++j)
                cout << "* ";

            cout << endl;
        }

        return 0;
    }
};

int main() 
{
    //creating object of class
    print_pattern obj;
    char n;
	do{

        //getting input
        int num;
        cout<<"Enter the number of rows: ";
        cin>>num;
        if (num>0){

            cout<<"\nTo print\n1.Pyramid pattern "<<endl;
            cout<<"2.Inverted pyramid pattern \n";
            cout<<"3.Diamond pattern"<<endl;

            int ch;
            cout<<"\nEnter your choice: ";
            cin>>ch;
            
            //calling functions according to choices.
            if (ch==1) {
                
                cout<<"\nPyramid pattern: "<<endl;
                obj.Triangle(num);

            }else if (ch==2) {
				
				cout<<"\nInverted Pyramid pattern: "<<endl;
                obj.Inv_Triangle(num);
            
            }else if(ch==3){

				cout<<"\nDiamond pattern: "<<endl;
                obj.Triangle(num);
                obj.Inv_Triangle(num);

            } else{
                cout<<"Enter a valid choice"<<endl;
            } 
        }

        else{
            cout<<"Enter positive number."<<endl;
        }

		cout<<"\nDo you want to continue?....(y/n):  ";
		cin>>n;

	}while(n=='Y' or n=='y');
	
	cout<<"Thanks."<<endl;

    return 0;
}

