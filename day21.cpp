// #include<iostream>
// using namespace std;
// int main()
// {
// int S[] = { 1, 3, 5, 7, 9 };
// int x=3;
// // cin>>x;
// for (int i = 0; i < 5; i++){
//     if (S[i] == x)
//     {
//         cout<<i<<endl<<"success";
//         break;
//     }
//     else {
//         cout<<"unsuccess";
//     }
// }
// }

// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
//     Node *prev;
// };

// // Function to insert a node at the beginning of the doubly linked list
// void insertAtBeginning(Node *&head, int newData)
// {
//     // Step 1: Create a new node
//     Node *newNode = new Node();
//     newNode->data = newData;
//     newNode->next = head;    // Step 2: Point newNode->next to current head
//     newNode->prev = nullptr; // Step 4: newNode->prev should be nullptr

//     // Step 3: If the list is not empty, update the prev pointer of the old head
//     if (head != nullptr)
//     {
//         head->prev = newNode;
//     }

//     // Step 5: Move the head pointer to the new node
//     head = newNode;
// }

// // Function to print the doubly linked list
// void printList(Node *node)
// {
//     while (node != nullptr)
//     {
//         cout << node->data << " ";
//         node = node->next;
//     }
//     cout << endl;
// }
// void pprintList(Node *node)
// {

//     while (node->next != nullptr)
//     {
//         // cout << node->data << " ";
//         node = node->next;
//     }
//     // cout << node->data;
//     while (node != nullptr)
//     {
//         cout << node->data << " ";
//         node = node->prev;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = nullptr;

//     // Insert data at the beginning
//     insertAtBeginning(head, 10);
//     insertAtBeginning(head, 20);
//     insertAtBeginning(head, 30);

//     // Print the list
//     // printList(head);
//     pprintList(head);

//     return 0;
// }


// C++ Program to insert a node at the end of
//doubly linked list
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;

    Node(int new_data) {
        data = new_data;
        next = prev = nullptr;
    }
};

// Function to insert a new node at the end of 
//doubly linked list
Node *insertEnd(Node *head, int new_data) {

    // Create a new node
    Node *new_node = new Node(new_data);

    // If the linked list is empty, set the new 
  	//node as the head of linked list
    if (head == NULL) {
        head = new_node;
    }
    else {
          Node *curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }

        // Set the next of last node to new node
        curr->next = new_node;

        // Set prev of new node to last node
        new_node->prev = curr;
    }

    // Return the head of the doubly linked list
    return head;
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {

    // Create a harcoded doubly linked list:
    // 1 <-> 2 <-> 3
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    // Print the original list
    cout << "Original Linked List: ";
    printList(head);

    // Insert a new node with data 4 at the end
    cout << "Inserting Node with data 4 at the end: ";
    int data = 4;
    head = insertEnd(head, data);

    // Print the updated list
    printList(head);

    return 0;
}
