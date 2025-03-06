#include <iostream>
#include "stack.h"

using namespace std;

int main() {
  try {
    // stack of ints
    Stack<int> stack;

    if(stack.empty()) {
      cout << "Stack is empty" << endl;
    } 
    else {
      cout << "Stack is not empty" << endl;
    }

    stack.push(10);
    stack.push(20);
    stack.push(30);

    // push
    if(stack.empty()) {
      cout << "Stack is empty after push" << endl;
    }
    else {
      cout << "Stack is not empty after push" << endl;
    }

    // top element
    cout << "Top element: " << stack.top() << endl;

    // pop
    stack.pop();
    cout << "Stack size after pop: " << stack.size() << endl;

    // pop until stack is empty
    stack.pop();
    stack.pop();
    if(stack.empty()) {
      cout << "Stack is empty after popping all elements" << endl;
    }
    else {
      cout << "Stack is not empty after popping all elements" << endl;
    }

    // underflow
    cout << "Pop from an empty stack" << endl;
    stack.pop();
  }
  catch(const underflow_error& e) {
    cout << "Caught exception: " << e.what() << endl;
  }
  return 0;
}