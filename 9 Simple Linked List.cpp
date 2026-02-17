// 9 simple linked list creation :-

#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
	char info;
	struct node * link;
};
int main()
{
	struct node *a, *b, *c;
	a = (struct node*)malloc(sizeof(struct node ));
	a->info='s';
	a->link=NULL;
	
	b = (struct node*)malloc(sizeof(struct node *));
	a->link=b;
	b->info= 's';
	b->link=NULL;
	
	c = (struct node*)malloc(sizeof(struct node *));
	b->link=c;
	c->info= 'v';
	c->link=NULL;
}
