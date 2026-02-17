// 22. Program to input and output array for Quick Sort...

#include<iostream>
using namespace std;

class arr
{
    int a[20], n;

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

    int partition(int low, int high)
    {
        int pivot = a[high];   // last element as pivot
        int i = low - 1;
        int temp;

        for (int j = low; j < high; j++)
        {
            if (a[j] < pivot)
            {
                i++;
                // swap a[i] and a[j]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        // place pivot at correct position
        temp = a[i + 1];
        a[i + 1] = a[high];
        a[high] = temp;

        return (i + 1);
    }

    void quicksort(int low, int high)
    {
        if (low < high)
        {
            int pi = partition(low, high);

            quicksort(low, pi - 1);   // left part
            quicksort(pi + 1, high);  // right part
        }
    }

    void sort()
    {
        quicksort(0, n - 1);
    }
};

int main()
{
    arr p;
    p.input();

    cout << "\nBefore sorting:\n";
    p.output();

    p.sort();

    cout << "\nAfter sorting:\n";
    p.output();

    return 0;
}
