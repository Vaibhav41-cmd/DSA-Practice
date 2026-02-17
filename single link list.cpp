#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
	int info;
	struct node*link;
};
int main()
{
	struct node *new1, *start, *start1, *save, *prev;
	int se, ele;
	start=NULL;
	while(1)
	{
		cout<<"\n1.insert \n2.display \n3.delete \n4.exit \n";
		cout<<"enter selection \n";
		cin>>se;
		switch(se)
		{
			case 1:
				cout<<"enter element \n";
				cin>>ele;
				new1=new node();
				new1->info=ele;
				new1->link=NULL;
				if(start==NULL)
				start=new1;
				else
				prev->link=new1;
				prev=new1;
				break;
				
			case 2:
				cout<<"displayed list \n";
				save=start;
				while(save!=NULL)
				{
					cout<<save->info<<"\t";
					save=save->link;
				}
				break;
				
			case 3:
				cout<<"enter element to delete \n";
				cin>>ele;
				if(start==NULL)		
				{
					cout<<"list is empty \n";
					break;
				}
				if(start->info==ele)
				{
					save=start;
					start=start->link;
					delete save;
					cout<<"element deleted \n";
					break;
				}
				prev=start;
				save=start->link;
				while(save!=NULL&&save->info!=ele)
				{
					prev=save;
					save=save->link;
				}
				if(save==NULL)
				{
					cout<<"element not found \n";
				}
				else
				{
					prev->link=save->link;
					delete save;
					cout<<"element deleted \n";
				}
				break;
				
			case 4:
				exit(0);	
		}
	}
}