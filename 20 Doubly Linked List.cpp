// 20. demonstrate a program to implement doule link list...

#include<iostream>
using namespace std;

struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
};

int main()
{
    struct node *save, *l, *r, *new1;
    int se, ele;
    l = NULL;
    r = NULL;

    cout << "\n1. insert in l, \n2. insert in r, \n3.display in l, \n4.display in r, \n5.exit";

    while (1)
    {
        cout << "\n enter selection:";
        cin >> se;

        switch (se)
        {
            case 1:  // insert at left
                cout << "\n enter any element for l: ";
                cin >> ele;

                new1 = new node();
                new1->info = ele;
                new1->llink = NULL;
                new1->rlink = NULL;

                if (l == NULL)
                {
                    l = new1;
                    r = new1;
                }
                else
                {
                    // LEFT insert logic
                    new1->rlink = l;
                    l->llink = new1;
                    l = new1;
                }
                break;

            case 2: // insert at right
                cout << "\n enter any element for r: ";
                cin >> ele;

                new1 = new node();
                new1->info = ele;
                new1->rlink = NULL;
                new1->llink = NULL;

                if (r == NULL)
                {
                    l = new1;
                    r = new1;
                }
                else
                {
                    // RIGHT insert logic
                    new1->llink = r;
                    r->rlink = new1;
                    r = new1;
                }
                break;

            case 3:  // display left to right
                cout << "\n left to right:\n";
                save = l;

                while (save != NULL)
                {
                    cout << save->info << "\t";
                    save = save->rlink;
                }
                break;

            case 4:  // display right to left
                cout << "\n right to left:\n";
                save = r;

                while (save != NULL)
                {
                    cout << save->info << "\t";
                    save = save->llink;
                }
                break;

            case 5:
                exit(0);

            default:
                cout << "\nInvalid choice";
        }
    }
}
