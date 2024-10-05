#include <iostream>
using namespace std;
// string reversee(string s, int length)
// {
//     char str[20];
//     int i = 0;
// while (length >= 0)
// {
// cout << s[length];
// str[i] = s[length];
// cout<<str[i];
// length--;
// i++;
// return reversee(s, length);
// }
// cout<<str;
// return str;
// }
// int main()
// {
// string s;
// cin >> s;
// int lengthh = s.length();
//
// cout << reversee(s, lengthh - 1);
// }

// string reverse(char str[], int length, string s)
// {
//     if (length < 0)
//     {
//         return str;
//     }
//     reverse(str, length - 1, s);
// }
// int main()
// {
//     char str[20];
//     string s;
//     cin >> s;
//     int length = s.length();
//     cout << reverse(str, length - 1, s);
// }

// Function to reverse a string using recursion
// string reverse(string str, int len)
// {
//     if (len < 1)
//     {
//         return "";
//     }
//     return str[len - 1] + reverse(str, len - 1);
// }

// int main()
// {
//     int str = 5;
//     cout << reverse(str)) << endl;
//     return 0;
// }

// int power(int x, int y, int answer)
// {
//     if (y < 1)
//     {
//         return answer;
//     }
//     answer *= x;
//     return power(x, y - 1, answer);
// }
// int main()
//     {int x, y, answer = 1;
//      cout << "enter a number and its power";
//      cin >> x >> y;
//     cout<< power(x, y, answer);
//     }