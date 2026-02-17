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
	cout<<"Adjacent Nodes:\n";
	for(i=0;i<n;i++)
	{
		cout<<"Vertex"<<i<<"is connected to:\n";
		for(j=0;j<n;j++)
		{
			if(g[i][j]==1)
			{
				cout<<j<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}