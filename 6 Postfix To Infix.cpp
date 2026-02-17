#include<iostream>
#include<cstring>
using namespace std;

class stack
{
	char s[30] [30];
	int top;
	public:
		stack()
		{
			top=0;
		}
		void push(char * ele)
		{
			top++;
			strcpy(s[top], ele);
		}
		char * pop()
		{
			top--;
			return (s[top+1]);
		}
		int isoperand(char c)
		{
			return(c!='*' && c!='/' && c!='+' && c!='-');
		}
};
int main()
{
	char infix[30],postfix[30],expr[30];
	int i;
	char nextchar;
	stack p;
	char *op1, *op2;
	char result[30];
	cout<<"Enter Any Expression : ";
	cin>>postfix;
	
	for(i=0; postfix[i]!='\0'; i++)
	{
		nextchar=postfix[i];
		expr[0]=nextchar;
		expr[1]='\0';
		if(p.isoperand(nextchar))
		{
			p.push(expr);
		}
		else
		{
			op2=p.pop();
			op1=p.pop();
			
			strcpy(result, " ");
			strcat(result, "(");
			strcat(result, op1);
			strcat(result, expr);
			strcat(result, op2);
			strcat(result, ")");
			
			p.push(result);
		}
	}
	cout<<"infix = "<<p.pop();
}