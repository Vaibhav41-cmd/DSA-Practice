#include<iostream>
#include<cstring>
using namespace std;
class stack
{
	char s[30];
	int top;
	public:
		stack()
		{
			top = 0;
		}
		int isempty()
		{
			return (top==0);
		}
		void push(char ele)
		{
			top++;
			s[top]=ele;
		}
		char gettopchar()
		{
			return (s[top]);
		}
		char pop()
		{
			char x=s[top];
			top--;
			return x;
		}
		int prcd(char c)
		{   
		    if(c=='^')
		    	return (3);
			else if(c=='*' || c=='/')
				return (2);
			else if(c=='+' || c=='-')
				return (1);
			else
				return (0);
			
		}
		int isoperand(char c)
		{
			return(c!='*' && c!='/' && c!='+' && c!='-'); 
		}
};
int main()
{
	char infix[30],postfix[30];
	char nextchar,topchar;
	int i=0, k=0;
	stack p;
	cout<<"enter any string : "<<endl;
	cin>>infix;
	
	for(i=0;infix[i]!='\0';i++)
	{
		nextchar=infix[i];
		if(p.isoperand(nextchar))
		{
			postfix[k]=nextchar;
			k++;
		}
		else
		{
			while(!p.isempty()&&(p.prcd(p.gettopchar())>p.prcd(nextchar)))
			{
				topchar=p.pop();
				postfix[k]=topchar;
				k++;
			}
			p.push(nextchar);
		}
	}
	while(!p.isempty())
	{
		topchar=p.pop();
		postfix[k]=topchar;
		k++;
	}
	postfix[k]='\0';
	cout<<postfix;
	
	return 0;
}