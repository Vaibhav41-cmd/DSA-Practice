// 11. write a program to implement operations of linked list insert , display, and copy...

#include<iostream>
using namespace std;

struct node
{
	int info;
	node * link;
};
int main()
{
	struct node *save, *new1, *prev, *start, *prev1, *start1;
	
	int se, ele;
	start = NULL;
	prev = NULL;
	cout<<"\n1.insert, \n2.display, \n3.copy, \n4.exit";
	while(1)
	{
		cout<<"\n Enter the Selection";
		cin>>se;
		
		switch(se)
		{
			case 1:
				cout<<"Enter the Element";
				cin>>ele;
				
				new1=new node();
				new1->info=ele;
				new1->link=NULL;
				
				if(start==NULL)
				{
					start=new1;
				}
				else
				{
					prev->link=new1;
				}
				prev=new1;
				break;
				
				case 2:
				save=start;
				if(save==NULL)
				{
					cout << "List is empty";
				}
				else
				{
					cout << "List: ";
					while(save!=NULL)
					{
						cout<<save->info<<"\t";
						save=save->link;
					}
				}
				break;
					
				case 3:
					save=start;
					start1=NULL;
					prev1=NULL;
					
					while(save!=NULL)	
					{
						new1=new node();
						new1->info=save->info;
						new1->link=NULL;
						
						if(start1==NULL)
						{
							start1=new1;
						}
						else
						{
							prev1->link=new1;
						}
							
						prev1=new1;
						save=save->link;
					}
					cout<<"list copied successfully. \ncopied list";
					save=start1;
					while(save!=NULL)
					{
						cout<<save->info<<"\t";
						save=save->link;
					}
					break;
						
						
			case 4:
			exit(0);
			break;
		}
	}
}

