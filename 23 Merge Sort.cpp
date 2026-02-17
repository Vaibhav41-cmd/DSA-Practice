// 23. Program to input and output array for Merge Sort...

#include<iostream>
using namespace std;

class arr
{
    int a[30], n;

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

    void merge(int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;

        int L[30], R[30];

        for (int i = 0; i < n1; i++)
            L[i] = a[l + i];

        for (int j = 0; j < n2; j++)
            R[j] = a[m + 1 + j];

        int i = 0, j = 0, k = l;

        // Merge the two temporary arrays
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                a[k] = L[i];
                i++;
            }
            else
            {
                a[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements
        while (i < n1)
        {
            a[k] = L[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            a[k] = R[j];
            j++;
            k++;
        }
    }

    void mergesort(int l, int r)
    {
        if (l < r)
        {
            int m = (l + r) / 2;

            mergesort(l, m);      // left part
            mergesort(m + 1, r);  // right part

            merge(l, m, r);       // merge them
        }
    }

    void sort()
    {
        mergesort(0, n - 1);
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
