#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertAtEnd(Node *&head, int value)
{

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << std::endl;
}

void deleteatbeginning(Node *&head)

{
    if (head == nullptr)
    {
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
}

void deleteAtEnd(Node *&head)
{
    if (head == nullptr)
    {
        return;
    }
    Node *temp = head;
    Node *prev;
    while (temp->next != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }
    delete temp;
    prev->next = nullptr;
}

void deleteatspecificpoint(Node *&head)
{
    if (head == nullptr)
    {
        return;
    }
    Node *temp = head;
    Node *prev;
    while(temp->data >= 18){
        prev = temp;
        temp = temp->next;
    }
prev->next = temp->next;
delete temp; 
}

void search (Node *&head, int age){
    if (head == nullptr)
    {
        return;
    }
    Node *temp = head;
    while(temp->data != age){
       temp =temp->next;
    }
    cout<<temp<<endl<<temp->data `;
}
int main()
{
    Node *head = nullptr;

    insertAtEnd(head, 58);
    insertAtEnd(head, 20);
    insertAtEnd(head, 3);
    insertAtEnd(head, 42);
    // deleteatspecificpoint(head);
    search(head, 3);
    // printList(head);
    return 0;
}