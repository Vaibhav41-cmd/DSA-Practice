#include<iostream>
using namespace std;

class dfs
{
	int graph[10][10], status[10], s[10];
	int n, top;
	public:
		dfs()
		{
			top=0;
		}
		int isempty()
		{
			return(top==0);
		}
		void push(int ele)
		{
			top++;
			s[top]=ele;
		}
		int pop()
		{
			top--;
			return(s[top+1]);
		}
		void getgraph()
		{
			int i, j;
			cout<<"Enter number of Vertices:\n";
			cin>>n;
			
			cout<<"Enter adjacency matrix:\n";
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					cin>>graph[i][j];
				}
			}
		}
		void processdfs()
		{
			int i, j, v;
			
			for(i=1;i<=n;i++)
			status[i]=0;
			
			push(1);
			status[1]=1;
			
			cout<<"DFS Traversal:";
			
			while(!isempty())
			{
				v=pop();
				cout<<v<<" ";
				
				for(j=1;j<=n;j++)
				{
					if(graph[v][j]==1 && status[j]==0)
					{
						push(j);
						status[j]=1;
					}
				}
			}
		}
};
int main()
{
	dfs d;
	d.getgraph();
	d.processdfs();
	
	return 0;
}