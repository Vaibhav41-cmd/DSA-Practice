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
		void selectionsort()
		{
			int i, j, min, temp;
			
			for(i=1; i<=n-1; i++)
			{
					min = i;
					for(j=i+1; j <= n; j++)
					{
						if(s[j]<s[min])
						{
							min = j;
						}
					}
					temp = s[i];
					s[i] = s[min];
					s[min] = temp;
				
			}
		}
};
int  main()
{
	array a;
	
	a.getarray();
	cout<<"before sorting:";
	a.putarray();
	
	a.selectionsort();
	cout<<"after sorting:";
	a.putarray();
	
	return 0;
}