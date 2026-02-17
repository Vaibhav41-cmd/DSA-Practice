#include <iostream>
using namespace std;

class ArrayOp
{
    int a[50], n;

public:
    void read()
    {
        cout << "Enter size of array: ";
        cin >> n;

        cout << "Enter elements: ";
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void display()
    {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    void insertElement()
    {
        int pos, ele;

        cout << "Enter position to insert: ";
        cin >> pos;
        cout << "Enter element: ";
        cin >> ele;

        // right shift elements
        for (int i = n; i >= pos; i--)
            a[i] = a[i - 1];

        a[pos - 1] = ele;
        n++;

        cout << "After insertion: ";
        display();
    }

    void deleteElement()
    {
        int pos;

        cout << "Enter position to delete: ";
        cin >> pos;

        // left shift elements
        for (int i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;

        cout << "After deletion: ";
        display();
    }
};

int main()
{
    ArrayOp obj;
    int ch;

    obj.read();

    while (1)
    {
        cout << "\n1. Display\n2. Insert\n3. Delete\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            obj.display();
            break;

        case 2:
            obj.insertElement();
            break;

        case 3:
            obj.deleteElement();
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }
    return 0;
}
