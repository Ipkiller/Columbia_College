// boilerplate code
#include <iostream>
using namespace std;


// Function prototype


int main (){
    const int size = 5;
    int* arr= new int[size] ;
    cout << arr <<endl;
    
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    
    return 0;
}