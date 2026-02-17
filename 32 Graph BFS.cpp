#include<iostream>
using namespace std;

class bfs
{
	int graph[10][10];
	int status[10];
	int q[10];
	int front, rear;
	int n;
	
	public:
		bfs()
		{
			front=0;
			rear=0;
		}
		int isempty()
		{
			return (front == 0 && rear == 0);

		}
		void insert(int ele)
		{
			rear++;
			q[rear]=ele;
			if(front==0)
			front=1;
		}
		int del()
		{
			int ele;
			ele=q[front];
			if(front==rear)
			{
				front=0;
				rear=0;
			}
			else
			{
				front++;
			}
				return ele;
		}
		void getgraph()
		{
    		int i, j;
    cout<<"Enter Number of Vertices:\n";
    cin>>n;
    
    cout<<"Enter Adjacency Matrix:\n";
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            cin >> graph[i][j];
        }
    }
}

		void processbfs()
		{
			int i, j, v;
			
			for(i=1;i<=n;i++)
				status[i]=0;
				
			insert(1);
			
			status[1]=1;
			
			cout<<"BFS Traversal:\n";
			
			while(!isempty())
			{
				v=del();
				cout<<v<<" ";
				
				for(j=1;j<=n;j++)
				{
					if(graph[v][j]==1 && status[j]==0)
					{
						insert(j);
						status[j]=1;
					}
				}
			}	
		}
};
int main()
{
	bfs b;
	
	b.getgraph();
	b.processbfs();
	
	return 0;
}
