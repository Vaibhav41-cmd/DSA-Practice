// Menu driven program for Queue operations

#include<iostream>
#include<stdlib.h>
using namespace std;

class queue
{
    int q[10];
    int front, rear, max;

    public:
        queue()
        {
            front = 0;
            rear = -1;
            max = 10;
        }

        int isoverflow()
        {
            return (rear == max - 1);
        }

        int isempty()
        {
            return (front > rear);
        }

        void enqueue(int ele)
        {
            rear++;
            q[rear] = ele;
        }

        int dequeue()
        {
            int ele = q[front];
            front++;
            return ele;
        }

        void display()
        {
            if (isempty())
            {
                cout << "Queue is empty\n";
            }
            else
            {
                cout << "Queue elements are:\n";
                for (int i = front; i <= rear; i++)
                    cout << q[i] << "\t";
                cout << endl;
            }
        }
};

int main()
{
    queue q;
    int ch, ele;

    while (1)
    {
        cout << "\n1. Insert (Enqueue)";
        cout << "\n2. Display";
        cout << "\n3. Delete (Dequeue)";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                if (q.isoverflow())
                    cout << "Queue is overflow\n";
                else
                {
                    cout << "Enter element: ";
                    cin >> ele;
                    q.enqueue(ele);
                }
                break;

            case 2:
                q.display();
                break;

            case 3:
                if (q.isempty())
                    cout << "Queue is empty\n";
                else
                {
                    ele = q.dequeue();
                    cout << "Deleted element: " << ele << endl;
                }
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid choice\n";
        }
    }
    return 0;
}

