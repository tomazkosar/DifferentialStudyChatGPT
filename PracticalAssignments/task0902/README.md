# Task 9.2 (optional)

In Task 9.1, you implemented a smart pointer. However, such an implementation may encounter the following problem:

```cpp
int main() {
     SmartPointer<Date> date1(new Date(6, 5, 2020)); // with the help of a smart pointer, we dynamically create a Date object
     {
         SmartPointer<Date> date2 = date1; // at this point we make a copy of the pointer date1 and 
                                           // now both pointers (date1 and date2 point to the same object)
     } // at this point the date2 smart pointer destructor will be called and the Date object will be deleted
     std::cout << date1->toString() << std::endl; // since both pointers pointed to the same object in memory,
                                                     // an error will occur here as we will be calling 
                                                     // the toString() method over an object that no longer exists

     return 0;
}
```

To fix this problem, you need to implement reference counting. To support ref counting, follow these requirements:

- Write a class `ReferenceCounter`, which should have an integer property `count`, which will represent the counter of
  existing references for a certain object. Set the `count` property to 0 by default.
- To increment or decrement the reference counter overload the following two operators:
    - prefix operator `--`, which will decrease the reference counter by the value of one and
    - the `++' postfix operator, which will increment the reference counter by one.
- Add a new property to the `SmartPointer` class, which should be a pointer to the `ReferenceCounter` object. This
  property will be shared by all instances of smart pointers that will point to the same object. In the parametrized
  constructor, initialize this value.
- To "maintain" the reference counter, overload the `=` operator and implement a copy constructor. In doing so, copy
  both properties and increase the reference counter by 1.

By implementing a copy constructor, covering an operator, and implementing a destructor, we followed
the [rule of three](https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming)). So in the code example below,
the `useCount()` method should only return 2 references.

```cpp
SmartPointer<Date> date1(new Date(1, 1, 2020));
SmartPointer<Date> date2(new Date(1, 1, 2019));
date2 = date1 = date1 = date1 = date1 = date1;
date2 = date2;
date2 = date2;
std::cout << "reference count: " << date2.useCount() << std::endl;
```

- Fix the destructor in the `SmartPointer` class, which will only delete an object if the reference count is 0.
- To check the value of the `count` inside the smart pointer, add a `useCount()` method that returns the counter value.

Demonstrate the use of your smart pointer and reference counting in the main program. You can take any class from
previous tasks (e.g. the `Date` class) or write a new one to demonstrate the functions.