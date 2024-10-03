#include <iostream>
using namespace std;
// void swap(int *y1, int *y2)
// {
//     int temp = *y1;
//     *y1 = *y2;
//     *y2 = temp;
// }
// int main()
// {
//     int x = 4, y = 8;
//     swap(&x, &y);
//     cout<<x<<endl<<y;
// }

// void swap(int *y1, int *y2, int *y3)
// {
//     int temp = *y1;
//     if (*y2 > temp)
//     {
//         temp = *y2;
//     }
//     if(*y3 > temp){
//         temp = *y3;
//     }
//     cout << temp;
// }
// int main()
// {
//     int x = 1411, y = 1811, z = 5211;
//     swap(&x, &y, &z);
// }

// void swap(int *y1, int *y2, int *y3, int *y4)
// {
//     int temp = *y1;
//     if (*y2 > temp)
//     {
//         temp = *y2;
//     }
//     if (*y3 > temp)
//     {
//         temp = *y3;
//     }
//     if (*y4 > temp)
//     {
//         temp = *y4;
//     }
//     cout << temp;
// }
// int main()
// {
//     int w = 105, x = 14, y = 11, z = 51;
//     swap(&w, &x, &y, &z);
// }

// void swap(int y1[], int *y2)
// {
//     int temp = y1[0];
//     for (int i = 1; i < *y2; i++)
//     {
//         if (y1[i] > temp)
//         {
//             temp = y1[i];
//         }
//     }
//     // cout << y1[1] << endl<< *y2;
//     cout << temp;
// }
// int main()
// {
//     int w[] = {51, 22, 23, 4};
//     int length = sizeof(w) / sizeof(int);
//     swap(w, &length);
// }

// void swap(int y1[], int *y2, int *y3, int *y4)
// {
//     y1[*y3] = *y4;
// }
// int main()
// {
//     int w[] = {51, 22, 23, 4};
//     int z, x;
//     int length = sizeof(w) / sizeof(int);
//     cin >> z >> x;
//     swap(w, &length, &z, &x);

//     for (int i = 0; i < length; i++)
//     {
//         cout << w[i] << endl;
//     }
// }

// void factorial(int *y1)
// {
//     int temp = 1;
//     for (int i = *y1; i > 0; i--)
//     {
//         temp *= i;
//     }
//     *y1 = temp;
// }
// int main()
// {
//     int x;
//     cout << "Enter number";
//     cin >> x;
//     factorial(&x);
//     cout<<x;
// }

// void length(char *y1)
// {
//     int countt = 0;
//     while (*y1 != '\0')
//     {
//         countt++;
//         *y1++;
//     }
//     cout << countt;
// }
// int main()
// {
//     string s ="hewllo";
    // cout << "enter:";
    // getline(cin, s);
    // cout<<s[s.length()-1];
//     char ss[25];
//     for (int i = 0; i < s.length()-1; i++)
//     {
//         ss[i] = s[i];
//     }
//     length(ss);
// }


void fibonacci (int y){
    int previous = 0, sum = 1, num = 0;
    while (num < y)
    {
        cout << previous << endl;
        int temp = previous;
        previous = sum;
        sum += temp;
        num++;
    }
}
int main (){
    int x;
    cin>>x;
    fibonacci (x);
}