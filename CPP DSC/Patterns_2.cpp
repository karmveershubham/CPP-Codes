#include <iostream>
using namespace std;

//creating class
class print_pattern {
public:
	//hollow triangle pattern
    int H_Triangle (int rows)
    {
        int i, j, k = 0;
        for (i=1; i<=rows-1; i++) 
        {
            // Print spaces
            for (j=i; j<rows; j++) {
                cout << " ";
            }
            // Print *
            while (k != (2*i-1)) {
                if (k==0 || k==2*i-2)
                    cout << "*";
                else
                    cout << " ";
                k++;
                ;
            }
            k = 0;
            cout << endl; // print next row
        }
        // print last row
        for (i = 0; i < 2*rows-1; i++) {
            cout << "*";
        }
        return 0;
    }


	// numeric triangle
    int Num_Triangle(int rows )
    {
        for(int i=1; i<=rows; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cout<<(i-j)+1;
            }
            cout<<endl;
        }
        return  0;
    }
    
	//Diamond Patterns
    int Num_Diamond(int rows)
    {
        int a = 1, space;
        space = rows - 1;
        while (space != 0)
        {
            cout << " ";
            space--;
        }
        cout << a << "\n";
        space = rows - 2;
        for (int i = 1; i < rows; i++)
        {
            a = 1;
            for (int k = 1; k <= space; k++)
            {
                cout << " ";
            }
            for (int j = 0; j <= i * 2; j++)
            {
                if (j < i)
                {
                    cout << a;
                    a++;
                }
                else
                {
                    cout << a;
                    a--;
                }
            }
            cout << "\n";
            space--;
        }
        for (int i = rows - 1; i >= 1; i--)
        {
            space = rows - i;
            a = 1;
            for (int k = 1; k <= space; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i * 2 - 1; j++)
            {
                if (j < i)
                {
                    cout << a;
                    a++;
                }
                else
                {
                    cout << a;
                    a--;
                }
            }
            cout << "\n";
            space--;
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

            cout<<"\nTo print\n1.Hollow '*' Triangle pattern "<<endl;
            cout<<"2.Numeric  Triangle pattern. \n";
            cout<<"3.Numeric Diamond pattern."<<endl;

            int ch;
            cout<<"\nEnter your choice: ";
            cin>>ch;
            
            //calling functions according to choices.
            if (ch==1) {
                
                cout<<"\nHollow triangle pattern: "<<endl;
                obj.H_Triangle(num);

            }else if (ch==2) {
				
				cout<<"\nNumeric  Triangle pattern: "<<endl;
                obj.Num_Triangle(num);
            
            }else if(ch==3){

				cout<<"\nDiamond pattern: "<<endl;
                obj.Num_Diamond(num);
                

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
	
	cout<<"\nThanks."<<endl;

    return 0;
}

