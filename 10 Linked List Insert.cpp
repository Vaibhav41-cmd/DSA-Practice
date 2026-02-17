// linked list program for insert, display and add list :-

#include<iostream>
using namespace std;

struct node
{
	int info;
	node * link;
};
int main()
{
	node *start = NULL;   // list ka start
    node *prev = NULL;    // last node ka address
    node *save, *new1;
    int se, ele;

    cout << "\n1. Insert\n2. Display\n3. Exit\n";

    while (1) 
	{
        cout << "\nEnter your selection: ";
        cin >> se;

        switch (se) 
		{
            case 1:
                cout << "Enter the element: ";
                cin >> ele;

                new1 = new node();   // new node create
                new1->info = ele;
                new1->link = NULL;

                if (start == NULL) 
				{
                    // first node
                    start = new1;
                } 
				else 
				{
                    // last node ke baad attach karo
                    prev->link = new1;
                }
                prev = new1;    // prev ko new last node pe le jao
                break;

            case 2:
                save = start;
                if (save == NULL) 
				{
                    cout << "List is empty.\n";
                } 
				
				else 
				{
                    cout << "List elements: ";
                    while (save != NULL) 
					{
                        cout << save->info << "\t";
                        save = save->link;
                    }
                    cout << endl;
                }
                break;

            case 3:
                exit(0);

            default:
                cout << "Invalid choice, try again.\n";
        }
    }

    return 0;
}
