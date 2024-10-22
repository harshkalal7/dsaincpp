// // C++ recursive function to
// // solve tower of hanoi puzzle
// #include <iostream>
// using namespace std;

// void towerOfHanoi(int n, char from_rod, char to_rod,
//                   char aux_rod)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
//     cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
// }

// // Driver code
// int main()
// {
//     int N = 3;

//     // A, B and C are names of rods
//     towerOfHanoi(N, 'A', 'C', 'B');
//     return 0;
// }


// #include <iostream>
// using namespace std;

// // Function to perform Bubble Sort
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         // Last i elements are already sorted
//         for (int j = 0; j < n - i - 1; j++) {
//             // Swap if the element is greater than the next element
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// // Function to print the array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     bubbleSort(arr, n);

//     cout << "Sorted array: \n";
//     printArray(arr, n);
//     return 0;
// }

#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}