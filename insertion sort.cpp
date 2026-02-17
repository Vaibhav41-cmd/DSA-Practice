#include<iostream>
using namespace std;

class array
{
	int s[100];
	int n;
	public:
		void getarray()
		{
			cout<<"enter size of array:";
			cin>>n;
			
			cout<<"enter array elements are:";
			for(int i=1; i<=n; i++)
			{
				cin>>s[i];
			}
		}
		void putarray()
		{
			cout<<"array elements are:\n";
			for(int i=1; i<=n; i++)
			{
				cout<<s[i]<<"\t";
			}
			cout<<"\n";
		}
		void insersionsort()
		{
			int i, j, key;
			
			for(i = 0; i<=n; i++)
			{
				key = s[i];
				j = i-1;
				
				while(j>=1 && s[j]>key)
				{
					s[j+1]=s[j];
					j--;
				}
				s[j+1]=key;
			}
		}
};
int  main()
{
	array a;
	
	a.getarray();
	cout<<"before sorting:";
	a.putarray();
	
	a.insersionsort();
	cout<<"after sorting:";
	a.putarray();
	
	return 0;
}