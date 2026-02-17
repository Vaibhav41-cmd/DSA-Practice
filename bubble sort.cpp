#include<iostream>
using namespace std;

class array
{
	int b[100];
	int n;
	public:
		void getarray()
		{
			cout<<"enter size of array:";
			cin>>n;
			
			cout<<"enter array elements:";
			for(int i=1; i<=n; i++)
			{
				cin>>b[i];
			}
		}
		void putarray()
		{
			cout<<"array elements are:\n";
			for(int i=1; i<=n; i++)
			{
				cout<<b[i]<<"\t";
			}
			cout<<"\n";
		}
		void bubblesort()
		{
			int i, j, temp;
			
			for(int i=1; i<=n-1; i++)
			{
				for(int j=1; j<=n-i; j++)
				{
					if(b[j]>b[j+1])
					{
						temp=b[j];
						b[j]=b[j+1];
						b[j+1]=temp;
					}
				}
			}
		}
};
int main()
{
	array a;
	
	a.getarray();
	cout<<"before sorting:";
	a.putarray();
	
	a.bubblesort();
	cout<<"after sorting:";
	a.putarray();
	
	return 0;
}