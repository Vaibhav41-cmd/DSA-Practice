// 18. program to input and output array for selection sort...

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

    void selectionsort()
    {
        int i, j, minIndex, temp;

        for (i = 0; i < n - 1; i++)
        {
            minIndex = i;

            // Find the smallest element in the remaining array
            for (j = i + 1; j < n; j++)
            {
                if (a[j] < a[minIndex])
                    minIndex = j;
            }

            // Swap only if needed
            if (minIndex != i)
            {
                temp = a[i];
                a[i] = a[minIndex];
                a[minIndex] = temp;
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

    p.selectionsort();

    cout << "\nAfter sorting:\n";
    p.output();

    return 0;
}
