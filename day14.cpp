#include <iostream>
using namespace std;
void H(int n, int i)
{

    for (int j = 1; j <= n; j++)
    {
        if (i == (n / 2) + 1 || j == 1 || j == n)
        {
            cout << "* ";
        }
        else
        {
            cout << "  ";
        }
    }
}
void A(int n, int i)
{

    for (int j = 1; j <= n; j++)
    {
        if (i == (n / 2) + 1 || j == 1 || j == n || i == 1)
        {
            cout << "* ";
        }
        else
        {
            cout << "  ";
        }
    }
}
void R(int n, int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (i == 1 || j == 1 || i == (n / 2) + 1 || (i < (n / 2) + 1 && j == n) || (i >= ((n / 2) + 1) && j == (i - n/2)))
        {
            cout << "* ";
        }
        else
        {
            cout << "  ";
        }
    }
}
void S(int n, int i)
{

    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == (n / 2) + 1 || i == n || (i < (n / 2) + 1 && j == 1) || (i > (n / 2) + 1 && j == n))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
    }
}
int main()
{
    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        H(n, i);
        A(n, i);
        R(n, i);
        S(n, i);
        H(n,i);
        cout << endl;
    }
}