#include<iostream>
using namespace std;

class matrix{
	private:
		int row;
		int col;
	    int **mat;
		
	public:
		matrix(int r,int c){
			row=r;
			col=c; 
			mat=new int*[row]; 
			for(int i=0;i<row;i++)
            {
                mat[i]=new int[col];       
            }  
		}
		
		int getrow()
		{
			return row;
		}
		int getcol(){
			return col;
		}
		int** getmat()
		{
			return mat;
		}
		void input();
        void Sum(matrix x);
        void Difference(matrix x);
		void Transpose();
        //void Multiplication(matrix x);
        
};

void matrix::input()     //to  input the matrix
	{
		int r=this->row;
		int c=this->col;
		cout<<"\nEnter the values of matrix. \n";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				cin>>mat[i][j];
		}
	}

void matrix::Sum(matrix b)
{
	int r,c,r2,c2;
	r=this->row;
	c=this->col;
	r2=b.getrow();
	c2=b.getcol();
	int **mata=this->mat;
	int **matb=b.getmat();
	
	cout<<"\nSum of the two matrices:\n";
	
	if(r!=r2 || c!=c2)
	{
		cout<<"Unequal sized matrices.:\n\n";
		return;
	}

	
	for(int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			int e=mata[i][j]+matb[i][j];
			cout<<e<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n";
}



void matrix::Difference(matrix b)
{
	int r,c,r2,c2;
	r=this->row;
	c=this->col;
	r2=b.getrow();
	c2=b.getcol();
	
	int **mata=this->mat;
	int **matb=b.getmat();
	
	cout<<"Difference of the two matrices-:\n";
	if(r!=r2 || c!=c2)
	{
		cout<<"Unequal sized matrices .\n\n";
		return;
	}
	
	
	for(int i=0;i<r;i++)
	
	{
		for (int j=0;j<c;j++)
		{
			int e=mata[i][j]-matb[i][j];
			
			cout<<e<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n";
}


void matrix::Transpose()
{
	int r,c;
	r=this->row;
	c=this->col;
	int **mata=this->mat;
	
	cout<<"Transpose of the matrix:-\n";
	
	for(int i=0;i<c;i++)
	
	{
		for (int j=0;j<r;j++)
		{
			int e=mata[j][i];
			
			cout<<e<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n";
}

/*void matrix::Multiplication(matrix b)
{
	int r1,c1,r2,c2;
	r1=this->row;
	c1=this->col;
	r2=b.getrow();
	c2=b.getcol();
	
	int **mata=this->mat;
	int **matb=b.getmat();
	
	cout<<"Matrix multiplication:- \n";
	
	if(c1!=r2)
	{
		cout<<"Number of columns in first matrix must be equal to number of rows is second matrix for matrix multiplication.\n\n";
		return;
	}
	else
	{
		int rm=r1,cm=c2;
		for(int i=0;i<rm;i++)
		{
			for(int j=0;j<cm;j++)
			{
				int ele=0;
				for(int k=0;k<c1;k++)
				{
					ele+=mata[i][k]*matb[k][j];
				}
				
				cout<<ele<<" ";
			}
			cout<<"\n";
		}
	}
	
}*/

int main()
{
	char choice='y';
	while(choice=='y' || choice=='Y')
	{
		int r1,c1,r2,c2;
		cout<<"Enter number of rows and columns of matrix1 : ";
		cin>>r1>>c1;
		cout<<"Enter number of rows and columns of matrix2 : ";
		cin>>r2>>c2;
		class matrix mat1(r1,c1);
		class matrix mat2(r2,c2);
		
		mat1.input();
		mat2.input();
		mat1.Sum(mat2);
		mat1.Difference(mat2);
		mat1.Transpose();
		mat2.Transpose();
		//mat1.Multiplication(mat2);
		
		
		cout<<"\nEnter 'Y' if you want to continue for other matrices: ";
		cin>>choice;
		cout<<endl;
		
	}cout<<"Thanks";
	return 0;	
}
