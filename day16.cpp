// #include <iostream>
// using namespace std;
// struct Node
// {
//     int Age;
//     Node *address;
// };
// void insertatbeginning(int data, Node *&head)
// {
//     Node *newnode = new Node;
//     newnode->Age = data;
//     newnode->address = head;
//     head = newnode;
// }
// void print(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->Age << endl;
//         head = head->address;
//     }
// }
// int main()
// {
//     Node *head = nullptr;
//     insertatbeginning(10, head);
//     insertatbeginning(20, head);

//     print(head);
// }

#include <iostream>
using namespace std;

struct Node
{
    int age;
    string name;
    Node *address;
};
void insertatbeginning(int data, string name, Node *&head)
{
    Node *newnode = new Node;
    newnode->age = data;
    newnode->name = name;
    newnode->address = head;
        head = newnode;
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->age<<" ";
        cout << head->name<<" ";
        head = head->address;
    }
}
int main()
{
    Node *head = nullptr;
    string a = "Harsh";
    string b = "Rajendra";
    insertatbeginning(10, a, head);
    insertatbeginning(20, b, head);

    print(head);
}