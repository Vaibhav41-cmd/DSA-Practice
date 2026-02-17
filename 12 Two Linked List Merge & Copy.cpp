// 12. write a program to implement two linked list and merge this two linked list...

#include<iostream>
using namespace std;

struct node
{
    int info;
    node *link;
};

int main()
{
    node *start = NULL, *start1 = NULL, *start2 = NULL;
    node *save, *new1, *prev = NULL, *prev1 = NULL, *prev2 = NULL;
    int se, ele;

    cout << "\n1.insert in first list\n2.insert in second list\n3.display first list\n4.display second list\n5.copy & merge\n6.exit";

    while (1)
    {
        cout << "\nEnter selection: ";
        cin >> se;

        switch (se)
        {
            case 1:     // Insert in first list
                cout << "Enter element: ";
                cin >> ele;
                new1 = new node();
                new1->info = ele;
                new1->link = NULL;

                if (start == NULL)
                    start = new1;
                else
                    prev->link = new1;

                prev = new1;
                break;


            case 2:     // Insert in second list
                cout << "Enter element: ";
                cin >> ele;
                new1 = new node();
                new1->info = ele;
                new1->link = NULL;

                if (start1 == NULL)
                    start1 = new1;
                else
                    prev1->link = new1;

                prev1 = new1;
                break;


            case 3:     // Display first list
                cout << "First list: ";
                save = start;
                while (save != NULL)
                {
                    cout << save->info << "\t";
                    save = save->link;
                }
                break;


            case 4:     // Display second list
                cout << "Second list: ";
                save = start1;
                while (save != NULL)
                {
                    cout << save->info << "\t";
                    save = save->link;
                }
                break;


            case 5:     // Copy first + copy second ? merge
                start2 = NULL;
                prev2 = NULL;

                // Copy first list into start2
                save = start;
                while (save != NULL)
                {
                    new1 = new node();
                    new1->info = save->info;
                    new1->link = NULL;

                    if (start2 == NULL)
                        start2 = new1;
                    else
                        prev2->link = new1;

                    prev2 = new1;
                    save = save->link;
                }

                // Copy second list into start2
                save = start1;
                while (save != NULL)
                {
                    new1 = new node();
                    new1->info = save->info;
                    new1->link = NULL;

                    prev2->link = new1;
                    prev2 = new1;

                    save = save->link;
                }

                cout << "\nMerged List: ";
                save = start2;
                while (save != NULL)
                {
                    cout << save->info << "\t";
                    save = save->link;
                }
                break;


            case 6:
                exit(0);
        }
    }
}
