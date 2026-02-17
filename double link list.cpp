#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int info;
    struct node* next;
    struct node* prev;
};

int main()
{
    struct node *new1, *start = NULL, *save;
    int se, ele;

    while(1)
    {
        cout<<"\n1.Insert \n2.Display \n3.Delete \n4.Exit\n";
        cout<<"Enter selection: ";
        cin>>se;

        switch(se)
        {
            case 1:
                cout<<"Enter element: ";
                cin>>ele;

                new1 = new node();
                new1->info = ele;
                new1->next = NULL;
                new1->prev = NULL;

                if(start == NULL)
                {
                    start = new1;
                }
                else
                {
                    save = start;
                    while(save->next != NULL)
                    {
                        save = save->next;
                    }
                    save->next = new1;
                    new1->prev = save;
                }
                break;

            case 2:
                cout<<"List elements:\n";
                save = start;
                while(save != NULL)
                {
                    cout<<save->info<<"\t";
                    save = save->next;
                }
                cout<<endl;
                break;

            case 3:
                cout<<"Enter element to delete: ";
                cin>>ele;

                if(start == NULL)
                {
                    cout<<"List is empty\n";
                    break;
                }

                save = start;
                while(save != NULL && save->info != ele)
                {
                    save = save->next;
                }

                if(save == NULL)
                {
                    cout<<"Element not found\n";
                    break;
                }

                if(save == start)   // deleting first node
                {
                    start = save->next;
                    if(start != NULL)
                        start->prev = NULL;
                }
                else
                {
                    save->prev->next = save->next;
                    if(save->next != NULL)
                        save->next->prev = save->prev;
                }

                delete save;
                cout<<"Element deleted\n";
                break;

            case 4:
                exit(0);

            default:
                cout<<"Invalid choice\n";
        }
    }

    return 0;
}
