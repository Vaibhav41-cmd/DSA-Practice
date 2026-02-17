// write a program to represent polynomial using array...

#include<iostream>
using namespace std;

class poly
{
    int coeff[100], power[100], n;

public:

    void inputpoly()
    {
        cout << "How many terms in the polynomial? ";
        cin >> n;

        cout << "Enter coefficient and power for each term:\n";
        for (int i = 0; i < n; i++)
        {
            cout << "Term " << i + 1 << " (coeff power): ";
            cin >> coeff[i] >> power[i];
        }
    }

    void displaypoly()
    {
        cout << "\nPolynomial = ";
        for (int i = 0; i < n; i++)
        {
            cout << coeff[i] << "x^" << power[i];

            if (i < n - 1)
                cout << " + ";
        }
        cout << endl;
    }
};

int main()
{
    poly p;
    p.inputpoly();
    p.displaypoly();
    return 0;
}
