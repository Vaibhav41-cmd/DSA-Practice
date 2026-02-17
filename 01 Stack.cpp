// write a program to implement simple stack 

#include<iostream>
using namespace std;

class stack
{
	int s[10], top, max;
	public:
		stack()
		{
			top=0;
			max=4;
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
		void disp()
		{
			int i;
			for(i=top; i>=1; i--)
			{
				cout<<s[i]<<"\t";
			}
		}
};
int main()
{
stack p;
p.push(10);
p.push(20);
p.push(30);	
p.disp();

return 0;
}