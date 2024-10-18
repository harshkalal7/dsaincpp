// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <10; i++)
//     {
//         for (int j = 1; j<12; j++){
//             if (i == 9 || j == 6 || j == 8 || j == 7 || ){
//                 cout<<" *";
//             }
//             else {
//                 cout<<"  ";
//             }

//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

struct Product
{
    int price;
    string name, pid;
    Product *next;
};
struct User
{
    string uname, uid;
    int number;
    User *next;
};
struct Order
{
    Product *pid[10];
    string oid;
    User *uid;
};
void Addproduct(Product *&head, int price, string name, string pid)
{

    Product *newProduct = new Product();
    newProduct->price = price;
    newProduct->name = name;
    newProduct->pid = pid;
    newProduct->next = nullptr;

    if (head == nullptr)
    {
        head = newProduct;
        return;
    }
    Product *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newProduct;
}
void AddUser(User *&head, int number, string name, string uid)
{

    User *newUser = new User();
    newUser->number = number;
    newUser->uname = name;
    newUser->uid = uid;

    newUser->next = nullptr;

    if (head == nullptr)
    {
        head = newUser;
        return;
    }
    User *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newUser;
}
void printList(User *head)
{
    while (head != nullptr)
    {
        cout << head->uname << " ";
        cout << head->number << " ";
        cout << head->uid << endl;
        head = head->next;
    }
}
int main()
{
    User *head = nullptr;
    // Product p1{1000, "jeans", "pid_1"};
    // Product p2{2000, "shirt", "pid_2"};
    // Product p3{3000, "t-shirt", "pid_3"};

    // User u1{"rajendra", "uid_1"};
    // User u2{"harsh", "uid_2"};
    // User u3{"ambika", "uid_3"};

    // Order o1{{&p1, &p2}, "oid_1", &u3};
    // Order o2{{&p1, &p2, &p3}, "oid_2", &u2};
    // Order o3 {{&p2, &p3}, "oid_3", &u2};

    // Addproduct(head, 1000, "jeans", "pid_1");
    // Addproduct(head, 2000, "tshirt", "pid_2");
    // Addproduct(head, 3000, "shirt", "pid_3");

    AddUser(head, 4789, "harsh", "uid_1");
 AddUser(head, 1234, "rajendra", "uid_2");
  AddUser(head, 5678, "hello", "uid_3");
    printList(head);
    return 0;
}