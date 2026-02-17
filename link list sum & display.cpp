#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
    int info;
    struct node *link;
};

int main()
{
    struct node *new1, *start, *save, *prev;
    int se, ele, key, sum;

    start = NULL;
    prev = NULL;

    while(1)
    {
        cout<<"\n1.Insert\n2.Display\n3.Search\n4.Sum\n5.Exit\n";
        cout<<"Enter selection: ";
        cin>>se;

        switch(se)
        {
            // INSERT
            case 1:
                cout<<"Enter element: ";
                cin>>ele;

                new1 = new node();
                new1->info = ele;
                new1->link = NULL;

                if(start == NULL)
                {
                    start = new1;
                }
                else
                {
                    prev->link = new1;
                }
                prev = new1;
                break;

            // DISPLAY
            case 2:
                if(start == NULL)
                {
                    cout<<"List is empty\n";
                    break;
                }
                cout<<"Linked List:\n";
                save = start;
                while(save != NULL)
                {
                    cout<<save->info<<"\t";
                    save = save->link;
                }
                break;

            // SEARCH
            case 3:
                cout<<"Enter element to search: ";
                cin>>key;

                save = start;
                while(save != NULL)
                {
                    if(save->info == key)
                    {
                        cout<<"Element found\n";
                        break;
                    }
                    save = save->link;
                }
                if(save == NULL)
                    cout<<"Element not found\n";
                break;

            // SUM
            case 4:
                sum = 0;
                save = start;
                while(save != NULL)
                {
                    sum = sum + save->info;
                    save = save->link;
                }
                cout<<"Sum of elements = "<<sum;
                break;

            // EXIT
            case 5:
                exit(0);
        }
    }
}
