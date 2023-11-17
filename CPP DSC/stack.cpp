#include <iostream>
using namespace std;

//creating class;
class Stack{

    private:
        int arr[100], n=100, top=-1;
    public:
        //push function
        void push(int val) {
            if(top>=n-1)
                cout<<"Stack Overflow"<<endl;
            else {
                top++;
                arr[top]=val;
            }
        }
        //pop function 
        void pop() {
        if(top<=-1)
        cout<<"Stack Underflow"<<endl;
        else {
            cout<<"The popped element is "<< arr[top] <<endl;
            top--;
        }
        }

        //display function 
        void display() {
        if(top>=0) {
            cout<<"Stack elements are:";
            for(int i=top; i>=0; i--)
            cout<<arr[i]<<" ";
            cout<<endl;
        } else
        cout<<"Stack is empty";
        }
};

int main() {
    //creatig object for class 
    Stack st;
    int ch, val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;

    char n;
    do {
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        //calling function according to choices.
        switch(ch) {
            case 1: {
                cout<<"Enter value to be pushed:"<<endl;
                cin>>val;
                st.push(val);
                break;
            }
            case 2: {
                st.pop();
                break;
            }
            case 3: {
                st.display();
                break;
            }
            default: {
                cout<<"Invalid Choice"<<endl;
            }
        }
        cout<<"\nDo you want to continue?....(y/n)";
		cin>>n;

	}while(n=='Y' or n=='y');
	
	cout<<"Thanks."<<endl;
	
	return 0;	
}