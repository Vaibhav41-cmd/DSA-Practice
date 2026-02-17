// 24. Program to input and output array for Heap Sort...

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

    void heapify(int n, int i)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int temp;

        // Find largest among root, left child, right child
        if (left < n && a[left] > a[largest])
            largest = left;

        if (right < n && a[right] > a[largest])
            largest = right;

        // If largest is not root, swap and continue heapifying
        if (largest != i)
        {
            temp = a[i];
            a[i] = a[largest];
            a[largest] = temp;

            heapify(n, largest);
        }
    }

    void heapsort()
    {
        // Build max heap
        for (int i = n / 2 - 1; i >= 0; i--)
        {
            heapify(n, i);
        }

        int temp;

        // Extract elements from heap one by one
        for (int i = n - 1; i > 0; i--)
        {
            // Move current root to end
            temp = a[0];
            a[0] = a[i];
            a[i] = temp;

            // Call heapify on reduced heap
            heapify(i, 0);
        }
    }
};

int main()
{
    arr p;
    p.input();

    cout << "\nBefore sorting:\n";
    p.output();

    p.heapsort();

    cout << "\nAfter sorting:\n";
    p.output();

    return 0;
}
