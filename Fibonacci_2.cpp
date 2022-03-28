#include <iostream>
using namespace std;

//function for nth term.
int fibonacci (int n) {  
    if (n==1){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }

}

//function for series upto nth term.
int fibo_1(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Series upto "<<n<< "th term.: " ;

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << "  ";
            continue;
        }
        if(i == 2) {
            cout << t2 << "  ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << "  ";
    }
    return 0;
}

//function for series upto n
int fibo_2(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series upto "<<n<< " or less.: " << t1 << "  " << t2 << "  ";

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        cout << nextTerm << "  ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}

int main() 
{

    char n;
	do{

        //getting input
        int num;
        cout<<"Enter the value of n:  ";
        cin>>num;
        if (num>=0){

            cout<<"\nTo find\n1.nth term of fibonacci sequence. "<<endl;
            cout<<"2.Series upto nth term of fibonacci sequence. \n";
            cout<<"3.Series fibonacci sequence upto n. "<<endl;

            int ch;
            cout<<"\nEnter your choice: ";
            cin>>ch;
            
            //calling functions according to choices.
            if (ch==1) {

                int res;
                res=fibonacci(num);
                cout<<"The "<<num<<"th term of fibonacci sequence is: "<<res<<endl; 
                
            }else if (ch==2) {

                fibo_1(num);
                cout<<endl;

            }else if (ch==3) {

                fibo_2(num);
                cout<<endl;

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
