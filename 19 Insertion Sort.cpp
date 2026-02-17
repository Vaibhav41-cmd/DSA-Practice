// 19. program to input and output array for insertion sort...

#include<iostream>
using namespace std;

class arr
{
    int a[10], n;

public:

    void input()
    {
        cout << "How many elements: ";
        cin >> n;

        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    void output()
    {
        cout << "Array elements are: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void insertionsort()
    {
        int i, j, key;

        for (i = 1; i < n; i++)
        {
            key = a[i];       // element to be inserted
            j = i - 1;

            // Shift elements greater than key
            while (j >= 0 && a[j] > key)
            {
                a[j + 1] = a[j];
                j--;
            }

            a[j + 1] = key;   // place key in its correct position
        }
    }
};

int main()
{
    arr p;

    p.input();

    cout << "\nBefore sorting:\n";
    p.output();

    p.insertionsort();

    cout << "\nAfter sorting:\n";
    p.output();

    return 0;
}
