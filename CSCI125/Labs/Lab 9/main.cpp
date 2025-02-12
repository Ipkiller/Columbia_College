#include "stack.h"
#include <iostream>
using namespace std;
using namespace stacksavitch;

int main() {
    Stack myStack;

    cout << "Pushing characters 'A', 'B', and 'C' onto the stack.\n";
    myStack.push('A');
    myStack.push('B');
    myStack.push('C');

    cout << "Popping elements from the stack:\n";
    while (!myStack.empty()) {
        cout << myStack.pop() << endl;
    }

    return 0;
}
