#include<iostream>
#include<conio.h>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(){
            name="shubham";
            age=20;
        }

        Person(Person &P) {
            name=P.name;
            age=P.age;
        }

        void get_data(){
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter age:";
            cin>>age;
        }

        void display_data(){
            cout<<"NAME:\t"<<name<<endl;
            cout<<"AGE:\t"<<age<<endl;
        }

        ~Person(){
            cout <<"\nDestructor  call";
        }
};

int main(){
    
    Person p1;
    cout<<"Printing default data of person1 set by  constructor"<<endl;
    p1.display_data();
    cout<<"\nSetting the new data for person 1"<<endl;
    p1.get_data();   // Normal constructor is called here

    Person p2=p1;    // Copy constructor is called here
    cout<<"Copy data through copy constructor.\n\nDisplay of Data:\n";
    cout<<"For Person P1\n";
    p1.display_data();
    cout<<"\nFor person P2\n";
    p2.display_data();
    //Person.~Person();
    cout<<"Thanks! ";
    getch();
    return 0;
}
