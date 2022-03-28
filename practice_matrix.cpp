#include<iostream>
#include<iomanip>
using namespace std;
class matrix{
	private:
		int row,column;
		int **mat;
	public:
		matrix(int r,int c){
			row=r;
			column=c;
			mat=new int *[row];
			for(int i=0;i<row;i++){
				mat[i]=new int [column];
				
			}
		}
	int getrow(){
		return row;
	}
	int getcolumn(){
		return column;
	}
	int **getmat(){
		return mat;
	}
	void input();
	int sum(matrix x);
	int diff(matrix x);
	int transpose();
};
void matrix::input(){
	int r=this->row;
	int c=this->column;
	cout<<"\nEnter the values row by row : ";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>mat[i][j];
		}
	}
}
int matrix::sum(matrix b){
	int r,c,r2,c2;

	r=this->row;
	c=this->column;
	r2=b.getrow();
	c2=b.getcolumn();
	int **mata=this->mat;
	int **matb=b.getmat();
	cout<<"The sum of matrices is : ";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			int s=mata[i][j]+matb[i][j];
			cout<<" "<<setw(6)<<s;
		}
		cout<<"\n";
	}
}
int matrix::diff(matrix b){
	int r,c,r2,c2;
	r=this->row;
	c=this->column;
	r2=b.getrow();
	c2=b.getcolumn();
	int **mata=this->mat;
	int **matb=b.getmat();
	int difference;
	cout<<"The difference of matrices is : ";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			difference=mata[i][j]-matb[i][j];
			cout<<setw(6)<<difference;
		}
	}
}
int main(){
	char choice='1';
	int r1,c1,r2,c2;
	while(choice=='1'){
		cout<<"Enter rows and columns of matrix 1";
		cin>>r1>>c1;
		cout<<"Enter rows and columns of matrix 2";
		cin>>r2>>c2;
		class matrix mat1(r1,c1);
		class matrix mat2(r2,c2);
		mat1.input();
		mat2.input();
		mat1.sum(mat2);
		cout<<"\n want to conyi nur press 1";
		cin>>choice;
	}
}










