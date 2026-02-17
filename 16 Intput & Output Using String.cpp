// 16. write a program for input & output string in array...

#include<iostream>
using namespace std;

class arr
{
    char a[100];
    int n;

public:
    void input()
    {
        cout << "How many characters: ";
        cin >> n;

        cout << "Enter characters:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    void output()
    {
        cout << "You entered: ";
        for (int i = 0; i < n; i++)   // FIXED: i < n
        {
            cout << a[i];
        }
        cout << endl;
    }
};

int main()
{
    arr p;
    p.input();
    p.output();
    return 0;
}

