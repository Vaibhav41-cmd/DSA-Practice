// write a program to implement stack operations such as push, pop, & display (menu base).

#include<iostream>
using namespace std;

class stack 
{
	int s[100], top, max, ele;
	public:
		stack()
		{
			top=0;
			max=100;
		}
		int isoverflow()
		{
			return(top>=max);
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
		void disp()
		{
			int i;
			for(i=top; i>=1; i--)
			cout<<s[i]<<"\t";
		}
};
int main()
{
	stack p;
	int ele, se;
	while(1)
	{
		cout<<"\n1.insert, \n2.display, \n3.delete, \n4.exit";
		cin>>se;
		switch(se)
		{
			case 1:
				if(p.isoverflow())
				{
					cout<<"overflow";
				}
				else
				{
					cout<<"\nenter element:";
					cin>>ele;
					p.push(ele);
				}
				break;
				
				case 2:
					if(!p.isempty())
					p.disp();
					else
					cout<<"empty stack:";
					break;
					
				case 3:
				if(!p.isempty())
				{
						
				ele=p.pop();
				cout<<ele;
			   }
				else
				{
				
				cout<<"empty stack:";
			}
				break;
				
				case 4:
					exit(0);
					break;
					
					cout<<endl;
					
				return 0;	
		}
	}
}
