#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main(){

    ofstream MyFile("filename.txt");        // Create and open a text file
    string content;
    cout<<"Enter the content of file: \n";     
    getline(cin,content);                
    MyFile<<content;                        // Write to the file
    MyFile.close();
    
    string myText;
    ifstream MyReadFile("filename.txt");     // Read from the text file
    cout<<"\nDISPLAY CONTENT\n\n";
    while (getline (MyReadFile, myText))     // Output the text from the file
    {
        cout << myText;
    }
    MyReadFile.close(); 
    getch();                     // Close the file
}