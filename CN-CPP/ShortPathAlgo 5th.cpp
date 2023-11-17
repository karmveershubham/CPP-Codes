#include<iostream>
#include<conio.h>
using namespace std;

class shortest_path{
    private:
        int ** router;
        int * arr;
        int n;
    public:
        shortest_path(int number){
            n=number;
            router = new int * [n];
            for(int i=0; i<n; i++)
                router[i] = new int [n];
            arr = new int [n];
            for(int i=0; i<n; i++)
                arr[i]=-1;
        }
        void input(){
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    cout<<"Enter the cost of path "<<i+1<<" - "<<j+1<<" : ";
                    cin>>router[i][j];
                    router[j][i]=router[i][j];
                }
                router[i][i]=0;
            }
            router[0][0]=0;
            cout<<endl;
        }
        void print(){
            cout<<"The cost array is:\n";
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<router[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void min_cost(int source=0){
            source--;
            arr[source]=0;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(router[i][j]!=0 && (arr[j]==-1 || arr[i]+router[i][j]<arr[j])){
                        arr[j]=arr[i]+router[i][j];
                    }
                }
            }
        }
        void output(int source){
            cout<<"\nShortest path from source "<<source<<" to source:\n";
            for(int i=0; i<n; i++)
                cout<<i+1<<" : "<<arr[i]<<"\n";
        }
};

int main(){
    int n;
    cout<<"Enter the number of routers: ";
    cin>>n;
    shortest_path spa(n);
    spa.input();
    spa.print();
    cout<<"Enter the source number: ";
    int source;
    cin>>source;
    spa.min_cost(source);
    spa.output(source);
    getch();
    return 0;
}
