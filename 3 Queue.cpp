// write a program for inserting and displaying elements in queue.

#include<iostream>
using namespace std;

class queue
{
	int q[100], front, rear, max;
	public:
		queue()
		{
			front=0;
			rear=0;
			max=10;
		}
		void insert(int ele)
		{
			if(rear>=max)
			{
				cout<<"queue is overflow:";
			}
			else
			{
				rear++;
				q[rear]=ele;
				if(front==0);
				(front=1);
			}
		}
		void disp()
		{
			int i;
			for(i=front; i<=rear; i++)
			{
				cout<<q[i];
			}
		}
};
int main()
{
	queue p;
	p.insert(10);
	p.insert(20);
	p.insert(30);
	p.insert(40);
	p.disp();
	
    return 0;	
}