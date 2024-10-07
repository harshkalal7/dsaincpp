#include <iostream>
using namespace std;
int main()
// {
//     int i, j, n;
//     cout << "Enter n";
//     cin >> n;
//     for (i = 1; i < n; i++)
//     {
//         for (j = 1; j < n; j++)
//         {
//             if ((i == 1) || (j == 1) || (j == n-1) || (i == n-1))
//             {
//                 cout << "* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout << endl;
//     }
// }

{
    int i, j;
    for (i = 3; i >= 1; i--)
    {
        for (j = 3; j >= 1; j--)
        {
            if ((i == 2 || j == 2) && (i == 3 || j == 3))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}