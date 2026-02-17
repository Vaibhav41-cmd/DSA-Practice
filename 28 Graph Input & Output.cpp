#include<iostream>
using namespace std;

int main()
{
	int g[10][10], n;
	int i, j;
	
	cout<<"Enter the number of Vertices:\n";
	cin>>n;
	
	cout<<"Enter Adjacency Matrix :\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>g[i][j];
		}
	}
	cout<<"Adjacency Matrix of Graph:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<g[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}