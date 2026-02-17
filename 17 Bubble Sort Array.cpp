// 17. program to input and output array for bubble sort swapping...

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
        for (int i = 0; i < n; i++)     // FIXED INDEXING
        {
            cin >> a[i];
        }
    }

    void output()
    {
        cout << "Array elements are: ";
        for (int i = 0; i < n; i++)     // FIXED INDEXING
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void bubblesort()
    {
        int temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    // CORRECT SWAP
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }
};

int main()
{
    arr p;
    p.input();

    cout << "\nBefore sorting:\n";
    p.output();

    p.bubblesort();

    cout << "\nAfter sorting:\n";
    p.output();

    return 0;
}
