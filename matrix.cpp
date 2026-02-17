#include<iostream>
using namespace std;

class matrix
{
	int m[20][20], n;
	public:
		void getmatrix()
		{
			cout<<"enter size of matrix:";
			cin>>n;
			
			cout<<"enter elements:\n";
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					cin>>m[i][j];
				}
			}
		}
		void putmatrix()
		{
			cout<<"matrix elements are:\n";
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					cout<<m[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
		matrix add(matrix b)
		{
			matrix c;
			c.n=n;
			
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					c.m[i][j]=m[i][j]+b.m[i][j];
				}
			}
			return c;
		}
		matrix sub(matrix b)
		{
			matrix c;
			c.n=n;
			
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					c.m[i][j]=m[i][j]-b.m[i][j];
				}
			}
			return c;
		}
		matrix transpose()
		{
			matrix t;
			t.n=n;
			
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					t.m[j][i]=m[i][j];
				}
			}
			return t;
		}
};
int main()
{
	matrix a, b, c, d, t;
	
	cout<<"enter first matrix:\n";
	a.getmatrix();
	
	cout<<"enter second matrix:\n";
	b.getmatrix();
	
	cout<<"matrix 1:\n";
	a.putmatrix();
	
	cout<<"matrix 2:\n";
	b.putmatrix();
	
	c=a.add(b);
	cout<<"matrix addition result:\n";
	c.putmatrix();
	
	d=a.sub(b);
	cout<<"matrix subtraction result:\n";
	d.putmatrix();
	
	t=c.transpose();
	cout<<"transpose matrix:\n";
	t.putmatrix();
	
}