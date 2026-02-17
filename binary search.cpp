#include<iostream>
using namespace std;

class search
{
	int a[100], n;
	public:
		void getarray()
		{
			cout<<"how many elements:";
			cin>>n;
			cout<<"enter elements in sorted order:\n";
			for(int i=0; i<n; i++)
			{
				cin>>a[i];
			}
		}
		void putarray()
		{
			for(int i=0; i<n; i++)
			{
				cout<<a[i]<<"\t";
			}
			cout<<"\n";
		}
		void binary_search()
		{
			int no, low=0, high=n-1, mid;
			
			cout<<"enter number to search:";
			cin>>no;
			
			while(low<=high)
			{
				mid=(low+high)/2;
				
				if(a[mid]==no)
				{
					cout<<"\n element found at position:"<<mid+1;
					return;
				}
				else if(no>a[mid])
				{
					low=mid+1;
				}
				else 
				{
					high=mid-1;
				}
			}
			cout<<"\n element not found:";
		}
};
int main()
{
	search s;
	
	s.getarray();
	s.putarray();
	s.binary_search();
	
	return 0;
}