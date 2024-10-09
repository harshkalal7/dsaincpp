#include <iostream>
using namespace std;

// struct User
// {
//     int age;
//     string name;
//     int roll_no;
// };
// int main()
// {

//     User *user1 = new User;
//     user1->age = 34;
//     cout<<user1->age;

//     return 0;
// }

// struct Point
// {
//     int x, y;
// };

// int main()
// {
//     struct Point p1 = {1, 2};
//     struct Point *p2 = &p1;
//     cout << p2->x << " " << p2->y;
//     return 0;
// }

// struct First
// {
//     int age;
//     int marks;
// };
// int main()
// {
//     First f1{1, 2};
//     // f1.age = 1;
//     // f1.marks = 2;
//     cout << f1.age << endl
//          << f1.marks;
// }

// struct User
// {
//     int age;
//     User *next;
// };
// int main()
// {
//     User user1{10};
//     User *temp;
//     temp = &user1;
//     User user2{20,temp};
//     cout << user2.next->next;
// }

struct User
{
    int age;
    User *next;
};
int main()
{
    User user1{10};
    User *temp1;
    temp1 = &user1;
    User user2{20, temp1};

    User *temp2;
    temp2 = &user2;
    User user3{30, temp2};

    User *temp3;
    temp3 = &user3;
    //////////////////////

    User user4{15, temp1};
    User *temp4;
    temp4 = &user4;
    user2.next = temp4;

    User user5{40,temp3};
    User *temp;
    temp = &user5;
    user3.next = temp2;

    cout << temp->next->next->next->next->age;
}