#include<iostream>
using namespace std;

struct node
{
    int info;
    struct node*next;
    struct node*prev;
};
main()
{
    struct node new1*, *start, *save;
    int se, ele;
    start = NULL;
    while(1)
    {
        cout<<"\n1.insert \n2.display \n3.delete \n4.exit \n";
        cout<<"enter selection:\n";
        cin>>se;
        switch (se)
        {
            case 1:
            cout<<"enter element:\n";
            cin>>ele;
            new1=new node();
            new1->info=ele;
            new1->prev=NULL;
            new1->next=NULL;
            if(start==NULL)
            start=new1;
            else
            save=start;
            while(save->next!=NULL)
            {
                save=save->next;
                save->next=new1;
                new1->prev=save;
            }
            break;

            case 2:
            cout<<"list displayed:\n";
            save=start;
            while(save!=NULL)
            {
                cout<<save->info<<"\t";
                save=save->next;
            }

            case 3:
            cout<<"enter element to delete: \n";
            cin>>ele;
            if(start==NULL)
            {
                cout<<"list is empty:\n";
                break;
            }
            save=start;
            while(save!=NULL & save->info!=ele)
            save=save->next;
            if(save==NULL)
            {
                cout<<"element not found:\n";
                break;
            }
            if(save==start)
            start=save->next;
            if(save!=NULL)
            start->prev=NULL;
            else
            save->prev->next=save->next;
            if(save->next!=NULL)
            save->next->prev=save->prev;
            delete save;
            cout<<"element selected:\n";
            break;
        
        case 4:
        exit(0);
            
        }
    }
    
}