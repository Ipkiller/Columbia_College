#ifndef STACK_H
#define STACK_H

namespace stacksavitch {
    struct StackFrame {
        char data;
        StackFrame* link;
    };

    typedef StackFrame* StackFramePtr;

    class Stack {
    public:
        Stack(); // Initializes the stack to be empty
        Stack(const Stack& aStack); // Copy constructor
        ~Stack(); // Destructor

        void push(char theSymbol); // Adds an element to the stack
        char pop(); // Removes and returns the top element
        bool empty() const; // Checks if the stack is empty

    private:
        StackFramePtr top; // Points to the top of the stack
    };
}

#endif // STACK_H
