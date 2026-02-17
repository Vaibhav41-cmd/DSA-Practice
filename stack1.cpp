#include<iostream>
using namespace std;

class stack
{
	int s[10], top, max;
	public:
		stack()
		{
			top=0;
			max=5;
		}
		void push(int ele)
		{
			if(top>=max)
			{
				cout<<"stack is overflow";
			}
			else
			{
				top++;
				s[top]=ele;
			}
		}
		void pop()
		{
			if(top==0)
			{
				cout<<"stack is underflow";
			}
			else
			{
				cout<<"deleted"<<s[top]<<"\t";
				top--;
			}
		}
		void disp()
		{
			if(top==0)
			{
				cout<<"stack is empty:";
			}
			cout<<"stack elements are:";
			for(int i=top;i>=1;i--)
			{
				cout<<s[i]<<"\t";
			}
		}
};
int main()
{
	stack s;
	int se,ele;
	
	while(1)
	{
		cout<<"\n1.push \n2.pop \n3.display \n4.exit \n";
		cout<<"enter selection:\n";
		cin>>se;
		
		switch(se)
		{
			case 1:
				cout<<"enter element:";
				cin>>ele;
				s.push(ele);
				break;
				
				case 2:
					s.pop();
					break;
					
					case 3:
						s.disp();
						break;
						
						case 4:
							exit(0);
		}
	}
}