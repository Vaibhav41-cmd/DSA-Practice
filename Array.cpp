#include<iostream>
using namespace std;

class array
{
	int a[100], n;
	public:
		void input()
		{
			cout<<"enter size of an array:";
			cin>>n;
			
			cout<<"enter array elements:\n";
			for(int i=0; i<n; i++)
			{
				cin>>a[i];
			}
		}
		void output()
		{
			cout<<"array elements are:";
			for(int i=0; i<n; i++)
			{
				cout<<a[i]<<"\t";
			}
			cout<<"\n";
		}
		void del()
		{
			int pos;
			cout<<"enter position to delete (1 to " <<n <<"):";
			cin>>pos;
			
			if(pos<1 || pos>n)
			{
				cout<<"invalid position:";
				return;
			}
			for(int i=pos-1;i<n-1;i++)
			{
				a[i]=a[i+1];
			}
			n--;
			cout<<"elements deleted successfully:";
		}
};
int main()
{
	array arr;
	
	arr.input();
	arr.output();
	arr.del();
	arr.output();
	
	return 0;
}