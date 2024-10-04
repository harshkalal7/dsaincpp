#include <iostream>
using namespace std;
// int factorial(int x, int answer)
// {
//     if (x == 0)
//     {
//         return answer;
//     }
//     answer *= x;
//     x--;
//     return factorial(x, answer);
// }
// int main()
// {
//     int x, answer=1;
//     cin >> x;
//     cout<<factorial(x, answer );
// }

// #include <iostream>
// using namespace std;
// long factorial(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main()
// {
//     int number;
//     cout << "Enter a positive integer: ";
//     cin >> number;
//     long result = factorial(number);
//     cout << "Factorial of " << number << " is " << result << endl;
//     return 0;
// }

// int sump(int x)
// {
//     if (x == 0)
//     {
//         return 0;
//     }
//     return x + sump(x - 1);
// }
// int main()
// {
//     int x;
//     cin >> x;
//     cout<<sump(x);
// }

// int fibonacci(int y, int sum, int prev, int tempp)
// {
//     if (y > 0)
//     {
//         cout<<prev;
// tempp = sum + prev;
// prev = sum;
// sum = tempp;
//         return fibonacci (y-1, sum, prev, tempp);
//     }
//     return 1;
// }
// int main()
// {
//     int x, sum = 1, prev=0, tempp=0;
//     cin >> x;
//      fibonacci(x,  sum, prev, tempp);
// }