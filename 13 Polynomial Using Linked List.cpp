// 13. write a program to represent a polynomial using linked list...

#include<iostream>
using namespace std;

struct node
{
    int coeff;
    int pow;
    node *link;
};

int main()
{
    node *start = NULL, *new1, *prev = NULL, *save;
    int ch, c, p;  // ch for choice , c for coefficient, p for power ...

    cout << "\n1. Insert Term";
    cout << "\n2. Display Polynomial";
    cout << "\n3. Exit";

    while (1)
    {
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                cout << "Enter coefficient: ";
                cin >> c;
                cout << "Enter power: ";
                cin >> p;

                new1 = new node();
                new1->coeff = c;
                new1->pow   = p;
                new1->link  = NULL;

                if (start == NULL)
                {
                    start = new1;
                }
                else
                {
                    prev->link = new1;
                }
                prev = new1;
                break;

            case 2:
                save = start;
                cout << "\nPolynomial = ";

                while (save != NULL)
                {
                    cout << save->coeff << "x^" << save->pow;
                    save = save->link;
                    if (save != NULL)
                        cout << " + ";
                }
                break;

            case 3:
                exit(0);
        }
    }
}
