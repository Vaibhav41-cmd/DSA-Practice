// 21. Program to input and output array for Radix Sort...

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

    int getMax()
    {
        int mx = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] > mx)
                mx = a[i];
        }
        return mx;
    }

    void countSort(int exp)
    {
        int output[20];
        int count[10] = {0};

        // Count occurrences of digits
        for (int i = 0; i < n; i++)
        {
            int index = (a[i] / exp) % 10;
            count[index]++;
        }

        // Convert to cumulative count
        for (int i = 1; i < 10; i++)
        {
            count[i] += count[i - 1];
        }

        // Build output array (stable sorting)
        for (int i = n - 1; i >= 0; i--)
        {
            int index = (a[i] / exp) % 10;
            output[count[index] - 1] = a[i];
            count[index]--;
        }

        // Copy back to original array
        for (int i = 0; i < n; i++)
        {
            a[i] = output[i];
        }
    }

    void radixsort()
    {
        int m = getMax();

        // Sorting digit by digit (1, 10, 100...)
        for (int exp = 1; m / exp > 0; exp *= 10)
        {
            countSort(exp);
        }
    }
};

int main()
{
    arr p;
    p.input();

    cout << "\nBefore sorting:\n";
    p.output();

    p.radixsort();

    cout << "\nAfter sorting:\n";
    p.output();

    return 0;
}
