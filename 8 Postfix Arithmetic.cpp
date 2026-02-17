#include<iostream>
#include<cstring>
using namespace std;
class stack
{
	int s[30];
	int top;
	public:
		stack()
		{
			top=0;
		}
		void push(int ele)
		{
			top++;
			s[top]=ele;
		}
		int pop()
		{
			int x = s[top];
        	top--;
        	return x;
		}
		int isoperand(int c)
		{
			return(c!='*' && c!='/' && c!='+' && c!='-');
		}
};
int main()
{
	char infix[30], postfix[30], expr[30];
	int i, se;
	int nextchar;
	stack p;
	int op1, op2, result;
	cout<<"Enter any Postfix Expression: ";
	cin>>postfix;
	for(i=0; postfix[i]!='\0'; i++)
	{
		nextchar=postfix[i];
		if(p.isoperand(nextchar))
		{
			p.push(nextchar -'0');
		}
		else
		{
			op2=p.pop();
			op1=p.pop();
			
			switch(nextchar)
			{
				case'*':
					result=op1*op2;
					break;
					
				case '/':
					result=op1/op2;
					break;
					
				case '+':
					result=op1+op2;
					break;
					
				case '-':
					result=op1-op2;
					break;	
					
			}
					
				p.push(result);			
		}
	
	}
		cout<<"FINAL RESULT :"<<p.pop();
	
	return 0;
}