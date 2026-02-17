#include<iostream>
using namespace std;

int main()
{
	int g[10][10], n, v;
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
	cout<<"enter vertex to find adjacent nodes:\n";
	cin>>v;
	cout<<"Adjacent nodes of Vertex"<<v<<"are";
	for(j=0;j<n;j++)
	{
		if(g[v][j]==1)
		{
			cout<<j<<" ";
		}
	}
	return 0;
}