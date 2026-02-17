#include<iostream>
using namespace std;

class stack
{
	char s[30];
	int top;
	public:
		stack()
		{
			top=0;
		}
		int isempty()
		{
			return(top==0);
		}
		void push(char ele)
		{
			top++;
			s[top]=ele;
		}
		char gettopchar()
		{
			return s[top];
		}
		char pop()
		{
			top--;
			return(s[top+1]);
		}
};
int prcd(char c)
{
	if(c == '*' || c == '/')
	return 2;
	if(c == '+' || c == '-')
	return 1;
	return 0;
}

int isoperand(char b)
{
	return(b != '*' && b != '/' && b != '+' && b != '-');
}

int main()
{
	char infix[30], postfix[30];
	char nextchar, topchar;
	int i = 0, k = 0;
	
	stack p;
	
	cout<<"enter infix exptression:";
	cin>>infix;
	
	for(i=0; infix[i]!='\0';i++)
	{
		nextchar = infix[i];

		if(isoperand(nextchar))
		{
			postfix[k++]=nextchar;
		}
		else
		{
			while(!p.isempty()&&prcd(p.gettopchar())>=prcd(nextchar))
			{
				postfix[k++]=p.pop();
			}
			p.push(nextchar);
		}
	}

	while(!p.isempty())
	{
		postfix[k++]=p.pop();
	}
	postfix[k]='\0';
	cout<<"\n postfix expression:"<<postfix;
	
	return 0;
}