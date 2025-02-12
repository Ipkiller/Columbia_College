#include <iostream>
using namespace std;

class DynamicArray
{
private:
    /* data */
    int* arr;
    int size;
public:
// Constructor
    DynamicArray() : arr(nullptr), size(0) {}

    // parametrized constructor
    DynamicArray(int size) : size(size)
    {
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = i+1; // initialize array with 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
        }
    }

    // Destructor
    ~DynamicArray()
    {
        delete[] arr;
        cout << "Destructor called" << endl;
    }

    // Copy Constructor
    DynamicArray(const DynamicArray& other)
    {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = other.arr[i];
        }
    }

    // overloaded assignment operator
    DynamicArray& operator=(const DynamicArray& other)
    {
        if (this == &other)
        {
            return *this; // self assignment
        }
        delete[] arr; // delete the old array
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = other.arr[i];
        }
        return *this;
    }

    friend ostream& operator<<(ostream& out, const DynamicArray& obj);
};

ostream& operator<<(ostream& outs, const DynamicArray& theArray)
{
    outs<<"Items in the Array:" << theArray.size << endl;
    for (int i = 0; i < theArray.size; i++)
    {
        outs << theArray.arr[i] << " ";
    }
    outs << endl;
    return outs;
}

int main()
{int choice;
DynamicArray obj1, obj2;

int size;
cout<< "Enter the size of the array: ";
cin>> size;
obj1 = DynamicArray(size); // parametrized constructor
cout << obj1;

obj2 = obj1; // overloaded assignment operator
cout << obj2;

DynamicArray obj3(obj1); // Copy Constructor
cout << obj3;

return 0;
}
