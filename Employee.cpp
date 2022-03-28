//Program for Employee details.
#include<iostream>
using namespace std;

//creating  Employee class 
class Employee
{
    private:
        int Enum;
        string ename;
        float esalary;

    public:
    
        void getData()
        {
            cout<<"Enter the Employee's number:\t";
            cin>>Enum;
            cout<<"Enter Employee's name:\t";
            cin>>ename;
            cout<<"Enter Employee's salary:\t";
            cin>>esalary;
            if (Enum<1) {
                cout<< "Invalid number.Employee number should be greater than 0"<<endl;
            }
            if (esalary<=0) {
                cout<<"Ivalid Number. Employee's salary cannot be 0 or negative."<<endl;
			}
        }

        int displayData()
        {
            cout<<"\nINFORMATION OF EMPLOYEE:"<<endl;
            cout<<"\nEmployee's Number:\t"<<Enum<<endl;
            cout<<"Employee's Name:\t"<<ename<<endl;
            cout<<"Employee's Salary:\t"<<esalary<<endl;
            
        }
};

int main(){

    //creating object 
    Employee E1;
    char ch='y';
    do{
        E1.getData();
        E1.displayData();
        cout<<"\nTo continue for another employee details. Press Y: "<<endl;
        cin>>ch;
    }while(ch=='y' or ch=='Y');
    cout<<"\nThanks.";
    return 0;
}
