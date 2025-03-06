#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

// Use inheritance from std::vector (choose public/private) as appropriate
template <typename T>
class Stack : private std::vector<T>
{
public:
    Stack() : std::vector<T>() {};
    ~Stack() {};

    bool empty() const {
      return this->size() == 0;
    };

    size_t size() const {
      return this->std::vector<T>::size();
    };

    void push(const T& item) {
      this->push_back(item);
    };

    // throws std::underflow_error if empty
    void pop() {
      if(empty()) {
        throw std::underflow_error("Error: empty stack");
      }
      this->pop_back();
    };

    // throws std::underflow_error if empty
    const T& top() const {
      if(empty()) {
        throw std::underflow_error("Error: empty stack");
      }
      return this->back();
    };

    // Add other members only if necessary
};


#endif