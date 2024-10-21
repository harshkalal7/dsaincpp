// #include<iostream>
// using namespace std;
// int main()
// {
// int S[] = { 1, 3, 5, 7, 9 };
// int x=70;
// // cin>>x;
// for (int i = 0; i < 5; i++){
//     if (S[i] == x)
//     {
//         cout<<i<<endl<<"success";
//         break;
//     }
//     else if (S[i] != x && i == 4){
//         cout<<"unsuccess"<<endl;

//     }
//     else{}
// }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int s[] = {1, 3, 2, 5, 8, 7, 9, 6};
//     int len = sizeof(s) / sizeof(int);
//     for (int i = 0; i < len; i++)
//     {
//         for (int j = 0; j < len; j++)
//         {
//             if (s[i] < s[j])
//             {
//                 int temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
//     // for (int k = 0; k < len; k++)
//     // {
//     //     cout << s[k] << " ";
//     // }
//     /////////////////////////
//     // 1 2 3 4 5 6 7 8 9
//     int high = len;     // 9
//     int mid = high / 2; // 4
//     int low = 0;        // 0
//     int f = 3;
//     int count = 0;
//     while (s[mid] != f)
//     {
//         if (s[mid] > f)
//         {
//             high = mid;
//             mid = (low + high) / 2;
//         }
//         if (s[mid] < f)
//         {
//             low = mid;
//             mid = (low + high) / 2;
//         }
//         if (mid == low)
//         {
//             mid = -1;
//             break;
//         }
//     }
//     if (mid != -1)
//     {
//         cout << s[mid] << " index:" << mid;
//     }
//     else
//     {
//         cout << "not found";
//     }
// }