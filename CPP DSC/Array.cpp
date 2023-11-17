#include<iostream>
using namespace std;

class Array{
	private:
		int size;
        int *arr;
		
	public:
		Array(int s){
			size=s;
			arr=new int [size]; 
		}

		void input();
        void Even();
        void Odd();
        void SumAverage();
        void MaxMin();       
};

void Array::input()     
	{
		int s=this->size;
		cout<<"\nEnter the elements of array. \n";
		for(int i=0;i<s;i++)
		{
			cin>>arr[i];
		}
	}


void Array::Even()
{
	int s;
    s=this->size;
    int *arrEven=this->arr;

    cout<<"\nEven Elements of the Array:-\n";

    for(int i=0; i<s; i++){
        if ((arrEven[i]) % 2==0){
            cout<<arrEven[i]<<" ";
        }
    }cout<<"\n";
}


void Array::Odd()
{
	int s;
    s=this->size;
    int *arrOdd=this->arr;

    cout<<"\nOdd Elements of the Array:-\n";

    for(int i=0; i<s; i++){
        if ((arrOdd[i]) % 2!=0){
            cout<<arrOdd[i]<<" ";
        }
    }cout<<"\n";
}

void Array::SumAverage()
{
	int s;
	s=this->size;
	int *arrSum=this->arr;
	
	cout<<"\nSum of the Elements of array: ";

    int res=0;
	for(int i=0; i<s; i++){
        res+=arrSum[i];  
    }
    cout<<res;
    cout<<"\n\nAverage of the Elements of array: "<<(res/s)<<"\n";
}

void Array::MaxMin()
{
	int s;
	s=this->size;
	int *arrMax=this->arr;
	int *arrMin=this->arr;
	int max=arrMax[0] , min=arrMin[0];
	
	for(int i=1;i<s;i++){
		if(max<arrMax[i])
			max=arrMax[i];
		if(min>arrMin[i])
			min=arrMin[i];
	}
	cout<<"\nMaximum value in array: "<<max<<"\n";
	cout<<"\nMinimum value in array: "<<min<<"\n";
    

}

int main()
{
	char choice='y';
	while(choice=='y' || choice=='Y')
	{
		int s;
        cout<<"Enter the size of Array: ";
        cin>>s;

		class Array array(s);
		
        array.input();

		cout<<"\n1.To get even elements.\n2.To get odd elements.\n3.To get sum and average of elements. \n4.To get maximum and minimum\n";
		int ch;
		cout<<"\nEnter your choice: ";
		cin>>ch;
		
		if(ch==1){
			array.Even();
		}else if(ch==2){
			array.Odd();
		}else if (ch==3){
			array.SumAverage();
		}else if (ch==4){
			array.MaxMin();
		}else{
			cout<<"Enter a valid choice."<<endl;
		}
		
		cout<<"\nEnter 'Y' if you want to continue for other array: ";
		cin>>choice;
		cout<<endl;
		
	}
	cout<<"\nThanks.";
	return 0;	
}
