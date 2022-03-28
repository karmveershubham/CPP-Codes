#include<iostream>
#include<conio.h>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(){
        }

        Person(Person &P) {
            name=P.name;
            age=P.age;
        }

        void get_data(){
            cout<<"Enter name:\t";
            cin>>name;
            cout<<"Enter age:\t";
            cin>>age;
        }

        void display_data(){
            cout<<"NAME:\t"<<name<<endl;
            cout<<"AGE:\t"<<age<<endl;
        }

        ~Person(){
        }

};

class Student : public Person{
    private:
        int  Class;
    public:
        void get_Class(int c){
            Class = c;
        }
        void get_data(){
            int c;
            cout<<"Enter class:\t";
            cin>>c;
            get_Class(c);
        }
        void display_data(){
            cout<<"CLASS:\t"<<Class<<endl;
        }
};

class Teacher : public Person{
    private:
        string specialization; 
    public:
        void get_Specialization(string s){
            specialization = s;
        }
        void get_data(){
            string s;
            cout<<"Enter Specialization:\t";
            cin>>s;
            get_Specialization(s);
        }
        void display_data(){
            cout<<"Specialization:\t"<<specialization<<endl;
        }
};

int main(){
    
    Person p;
    Student s;
    Teacher t;
    char c,ch;
    cout<<"1.For student class\n2.For teachers class\n";
    cin>>c;
    if(c=='1'){
        p.get_data();
        s.get_data();
        p.display_data();
        s.display_data();
    }
    else if(c=='2'){
        p.get_data();
        t.get_data();
        p.display_data();
        t.display_data();
    }
    else{
        cout<<"Invalid choice";
    }
    cout<<"To continue presss Y:";
    cin>>ch;
    if(ch=='y' or ch=='Y'){
        main();
    }
    getch();

    cout<<"Thanks! ";
    return 0;
}
