#include<iostream>
#include<cstring>
using namespace std;

class stack 
{
	char s[50];
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
		char gettopchar()
		{
			return (s[top]);
		}
		void push(char ele)
		{
			top++;
			s[top]=ele;
		}
		char pop()
		{
			char x=s[top];
			top--;
			return x;
		}
		int prcd(char c)
		{
			if(c=='*' || c=='/')
				return(3);
			else if(c=='+' || c=='-')
				return(2);
			else if(c=='(' || c==')')
				return(1);
			else
				return 0;
		}
		int isoperand(char c)
		{
			return (c!='+' && c!='-' && c!='*' && c!='/' && c!='(' && c!=')');
		}
		void reversestring(char str[])
		{
			int n=strlen(str);
			int i;
			char ch;
			for(i=0; i<n/2; i++)
			{
				ch = str[i];
				str[i]=str[n-i-1];
				str[n-i-1]=ch;
			}
    	}
};
		int main()
		{
			char infix[50],postfix[50];
			char nextchar, topchar;
			int i=0,k=0;
			stack p;
			
			cout<<"Enter Infix Expression : ";
			cin>>infix;
			
			p.reversestring(infix);
			
			for(i=0; infix[i]!='\0'; i++)
			{
				nextchar=infix[i];
				if(p.isoperand(nextchar))
				{
					postfix[k]=nextchar;
					k++;
				}
				else if(nextchar=='(')
				{
					p.push(nextchar);
				}
				else if(nextchar==')')
				{
					while(!p.isempty() && p.gettopchar()!='(')
					{
						postfix[k]=p.pop();
						k++;
					}
					p.pop();
				}
				else
				{
					while(!p.isempty() &&(p.prcd(p.gettopchar())>=p.prcd(nextchar)))
					{
						postfix[k]=p.pop();
						k++;
					}
					p.push(nextchar);
				}
			}
				while(!p.isempty())
				{
					postfix[k]=p.pop();
					k++;
				}
				postfix[k]='\0';
				p.reversestring(postfix);
				
				cout<<"find postfix expression"<<postfix;
		}

