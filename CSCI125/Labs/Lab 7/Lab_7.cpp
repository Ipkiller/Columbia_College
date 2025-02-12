#include <iostream>
using namespace std;

// Function prototype
double calculateAverage(int* arr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        sum += arr[i];
    }

    return static_cast<double>(sum) / size;
    
}

int* resizeArray(int* arr, int size, int newSize){
    int* newArr = new int[newSize];
    for (int i = 0; i < size; i++)
    {
        /* code */
        newArr[i] = arr[i];
    }
    delete[] arr;
    return newArr;
}


int main(){
    // Declare variables
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // dyanamically allocate memory for the array
    int* arr = new int[size]; // arr is a pointer to the first element of the array
    for (int i = 0; i < size; i++)
    {
        /* code */
        arr[i] = i + 1;
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // use the calculateAverage function to calculate the average of the array
    double average = calculateAverage(arr, size);
    cout << "The average of the array is: " << average << endl;

    //use the resizeArray function to resize the array
    int newSize= size * 2;
    arr = resizeArray(arr, size, newSize);

    cout << "resized array: " << endl;

    for (int i = 0; i < newSize; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;

    // deallocate memory
    delete[] arr; //free the memory allocated for the array
    return 0;
}