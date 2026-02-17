#include<iostream>
#include<cstdlib>
using namespace std;


class queue
{
	int q[100], front, rear, max;
	public:
		queue()
		{
			front=0;
			rear=0;
			max=5;
		}
		void enqueue(int ele)
		{
			if(rear==max)
			{
				cout<<"queue is overflow:\n";
			}
			else
			{
				rear++;
				q[rear]=ele;
			}
		}
		void dequeue()
		{
			if(front==rear)
			{
				cout<<"queue is underflow:\n";
			}
			else
			{
				front++;
				cout<<"deleted:"<<q[front];
			}
		}
		void disp()
		{
			if(front==rear)
			{
				cout<<"queue is empty:\n";
			}
			cout<<"queue elements are:\n";
			for(int i=front+1;i<=rear;i++)
			{
				cout<<q[i]<<"\t";
			}
		}
};
int main()
{
	queue q;
	int se, ele;
	
	while(1)
	{
		cout<<"\n1.enqueue \n2.dequeue \n3.display \n4.exit \n";
		cout<<"enter selection:\n";
		cin>>se;
		
		switch(se)
		{
			case 1:
				cout<<"enter element:\n";
				cin>>ele;
				q.enqueue(ele);
				break;
				
				
				case 2:
					q.dequeue();
					break;
					
					
					case 3:
						q.disp();
						break;
						
						case 4:
							exit(0);
		}
	}
}