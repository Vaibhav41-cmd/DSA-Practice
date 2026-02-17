#include<iostream>
using namespace std;

class search
{
	int a[100], n;
	public:
		void input()
		{
			cout<<"how many elements:";
			cin>>n;
			cout<<"enter elements in sorting order:\n";
			for(int i=0; i<n; i++)
			{
				cin>>a[i];
			}
		}
		void output()
		{
			for(int i=0; i<n; i++)
			{
				cout<<a[i]<<"\t";
			}
			cout<<endl;
		}
		void linear_search()
		{
			int no;
			cout<<"enter no to search:\n";
			cin>>no;
			
			for(int i=0; i<n; i++)
			{
				if(a[i]==no)
				{
					cout<<"number found at position:\n"<<i+1<<endl;
					return ;
				}
			}
			cout<<"\n number not found:\n";
		}
};
int main()
{
	search s;
	
	s.input();
	s.output();
	s.linear_search();
	
	return 0;
}