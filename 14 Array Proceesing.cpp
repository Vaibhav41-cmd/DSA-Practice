// write a program to implement array processing...

#include<iostream>
using namespace std;

class arr
{
    int a[100], n;   // FIX: declare n inside class

public:
    void input()
    {
        int i;
        cout << "How Many elements: ";
        cin >> n;

        cout << "Enter the elements:\n";
        for (i = 0; i < n; i++)    // FIX: indexing from 0
        {
            cin >> a[i];
        }
    }

    void output()
    {
        int i;
        cout << "Array elements are: ";
        for (i = 0; i < n; i++)    // FIX: indexing from 0
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    arr p;
    p.input();
    p.output();
}

