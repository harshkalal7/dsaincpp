// #include <iostream>
// using namespace std;

// // Function to swap two elements
// void swap(int* a, int* b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// // Partition function to place pivot element at the right position
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];  // choosing the last element as pivot
//     int i = (low - 1);      // index of smaller element

//     for (int j = low; j < high; j++) {
//         // If current element is smaller than or equal to pivot
//         if (arr[j] <= pivot) {
//             i++;    // increment index of smaller element
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }

// // QuickSort function
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         // Partitioning index
//         int pi = partition(arr, low, high);

//         // Separately sort elements before and after partition
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// // Function to print an array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// // Main function
// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     cout << "Unsorted array: ";
//     printArray(arr, n);
    
//     quickSort(arr, 0, n - 1);
    
//     cout << "Sorted array: ";
//     printArray(arr, n);
    
//     return 0;
// }


// ?????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Insert a node in the binary tree
Node* insert(Node* root, int val)
{
    if (root == NULL) 
    {
        return new Node(val);
    }

    // Inserting the node in the left or right subtree
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

// Inorder traversal (Left, Root, Right)
void inorder(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder traversal (Root, Left, Right)
void preorder(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder traversal (Left, Right, Root)
void postorder(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node* root = NULL;
    root = insert(root, 10);
    insert(root, 5);//1000,5
    insert(root, 20);//1000,20
    insert(root, 3);//1000,3
    insert(root, 7);//1000,7
    insert(root, 15);//1000,15

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}