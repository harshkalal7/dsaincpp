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

int main()
{
    Node *head = nullptr;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    printList(head);
    return 0;
}