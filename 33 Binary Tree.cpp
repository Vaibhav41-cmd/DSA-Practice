#include<iostream>
#include<queue>
using namespace std;

class Node
{
	public:
		int data;
		Node *left, *right;
		
		Node(int value)
		{
			data=value;
			left=right=NULL;
		}
};
int main()
{
	int x;
	cout<<"Enter the Root Element:";
	cin>>x;
	int first, second;
	queue<Node*>q;
	Node *root=new Node(x);
	q.push(root);
	
	// Build the Binary Tree
	while(!q.empty())
	{
		Node *temp=q.front();
		q.pop();
		
		// Left Child
		cout<<"Enter the Left Child of Root:"<<temp->data<<" : ";
		cin>>first;    // left node ki value
		
		if(first!=-1)
		{
			temp->left=new Node(first);
			q.push(temp->left);
		}
		
		// Right Node
		cout<<"Enter the Right Child of Root:"<<temp->data<<"  : ";
		cin>>second;
		
		if(second!=-1)
		{
			temp->right=new Node(second);
			q.push(temp->right);
		}
	}
}