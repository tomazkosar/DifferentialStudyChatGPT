# Task 9.1 (mandatory)

Until now, we have always used so-called `raw' pointers. Since C++11, there
are [smart pointers](https://en.cppreference.com/book/intro/smart_pointers). The advantage of smart pointers, for
example, is that the destructor is called automatically, so we don't have to worry about deleting objects ourselves.

In this assignment, you will use your knowledge of class templates and operator overloading to implement your own smart
pointer. The main task of the class will be to contain a pointer to an arbitrary object and delete it when the
destructor is called.

The task has the following requirements:

- Create a template of class `SmartPointer` that contains a pointer to an arbitrary object and deletes the same object
  when the destructor of this class is called. Implement the setup parameterized constructor and the destructor.
- To make the smart pointer behave the same way as the `raw` pointer, you need to override the `*` and `->` operators.
    - When overloading the `*` operator, you must dereference the pointer to the object and return it.
    - When overloading the `->` operator, you only need to return a pointer to the object.
- The code snippet below is an example of a smart pointer for the `Date` class, including the `*` overloaded operator.
  You must turn it into a template class and implement the rest of the requirements (overload the rest of the operators,
  constructors and destructor).
- For an example of the main program (using your smart pointer), see optional Task 9.2.

```cpp
#include "Date.h"

class SmartPointer {
private:
    Date* pData;

public:
    // ...

    Date& operator*() {
        return *pData;
    }

    // ...
};
```

Take the `Date` class from the previous tasks and complete it with the following requirements.

- In the `Date` class, write a friend function to overload the
  operator `<<` (`friend std::ostream& operator<<(std::ostream &out, const Date &date)`).
- Overload the operator `==`, which compares two objects of class `Date` and returns `true` and `false` respectively,
  depending on if the dates are the same or different (`bool operator===(const Date& other)`).
- In the `Date` class, overload the prefix and postfix operators `++`, which increment the day by 1. Be careful not to
  exceed the number of months (`int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31, 30, 31};`).
  Prototypes of the two overloaded operators in the `Date` class:
    - `Date& operator++();`
    - `Date operator++(int dummy);`

Demonstrate the use of the friend function and all the overloaded operators in the main program! Show at least one
example where you use your smart pointer and one example of the use of
the [`shared_ptr` pointer from the C++11 standard](https://en.cppreference.com/w/cpp/memory/shared_ptr).

