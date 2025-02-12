#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size);

void selectionSort(int arr[], int size);

void swaper(int arr[], int i, int j);

void printArray(int arr[], int size);

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    // User chooses sorting algorithm
    int choice;
    cout << "Enter 1 for Bubble Sort or 2 for Selection Sort: ";
    cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(arr, size);
            cout << "Sorted array using Bubble Sort: ";
            printArray(arr, size);
            break;
        case 2:
            selectionSort(arr, size);
            cout << "Sorted array using Selection Sort: ";
            printArray(arr, size);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
// functions

void swaper(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                swaper(arr, j, j + 1);
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the elements
        swaper(arr, i, minIndex);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
