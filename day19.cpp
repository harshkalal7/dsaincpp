// #include <iostream>
// using namespace std;

// struct User
// {
//     User *prev;
//     int age;
//     User *next;
// };
// int main()
// {
//     User *temp1;
//     User *temp2;
//     User *temp3;
//     User *temp4;

//     User user1{nullptr, 5, temp2};
//     user1->prev = nullptr;
//     user1->next = temp2;

//     User user2{temp1, 10, temp3};
//     user2->prev = temp1;
//     user2->next = temp3;

//     User user3{temp2, 15, temp4};
//     user3->prev = temp2;
//     user3->next = temp4;

//     User user4{temp3, 20, nullptr};
//     user4->prev = temp3;
//     user4->next = nullptr;

//     cout << user3->prev->age;
// }


#include <iostream>
using namespace std;

struct Product
{
    int price;
    string name, pid;
};
struct User
{
    string uname, uid;
};
struct Order
{
    Product *pid[10];
    string oid;
    User *uid;
};
int main()
{
    Product p1{1000, "jeans", "pid_1"};
    Product p2{2000, "shirt", "pid_2"};
    Product p3{3000, "t-shirt", "pid_3"};

    User u1{"rajendra", "uid_1"};
    User u2{"harsh", "uid_2"};
    User u3{"ambika", "uid_3"};

    Order o1{{&p1, &p2}, "oid_1", &u2};
    Order o2{{&p1, &p2, &p3}, "oid_2", &u1};

    cout << o2.pid[0]->name<<endl;
    cout << o2.pid[1]->name<<endl;
    cout << o2.pid[2]->name<<endl;
    o2.uid->uname = "hello";
    cout << o2.uid->uname;

    return 0;
}