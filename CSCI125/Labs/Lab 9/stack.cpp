#include "stack.h"
#include <iostream>
#include <cstddef> 
using namespace std;

namespace stacksavitch {

    // using cstddef
    Stack::Stack() : top(NULL) {
        // Body intentionally empty
    }

    Stack::Stack(const Stack& aStack) {
        if (aStack.top == NULL) {
            top = NULL; // If the original stack is empty
        } else {
            // Copy the first node
            top = new StackFrame;
            top->data = aStack.top->data;

            // Copy the remaining nodes
            StackFramePtr sourcePtr = aStack.top->link;
            StackFramePtr destPtr = top;

            while (sourcePtr != NULL) {
                destPtr->link = new StackFrame;
                destPtr = destPtr->link;
                destPtr->data = sourcePtr->data;
                sourcePtr = sourcePtr->link;
            }
            destPtr->link = NULL;
        }
    }

    Stack::~Stack() {
        char next;
        while (!empty()) {
            next = pop(); // Calls delete internally
        }
    }

    void Stack::push(char theSymbol) {
        StackFramePtr newFrame = new StackFrame;
        newFrame->data = theSymbol;
        newFrame->link = top;
        top = newFrame;
    }

    char Stack::pop() {
        if (empty()) {
            cout << "Error: popping an empty stack.\n";
            exit(1);
        }

        char result = top->data;
        StackFramePtr tempPtr = top;
        top = top->link;
        delete tempPtr;
        return result;
    }

    bool Stack::empty() const {
        return (top == NULL);
    }
}
