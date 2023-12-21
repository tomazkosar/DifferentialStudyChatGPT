# Task 8.2 (optional)

Implement your own implementation of [one-way linked list](https://en.wikipedia.org/wiki/Linked_list) for any type (`LinkedList`).

Write the template implementation of the class in a .h file (no .cpp).

* Implement a template class `Node` that has:
  * instance variables:
    * `value` - it can be of any type
    * `next` - points to a successor (of type `Node*`) in the list
  * a constructor with two values (`next` has the default value `nullptr`)
  * get and set methods.
* Implement a template class `LinkedList` that has:
  * an instance variable `head` representing the start of your list or your first node (if it is an empty list, let it have the default value `nullptr`)
  * the `isEmpty()` method, which returns `true` if the list is empty, otherwise it should return `false`
  * the `getSize()` method, which returns the length of the list
  * the `add(T value)` method, which adds a value to the end of the list
  * the `at(unsigned int index)` method, which returns the value located at the given index
  * a destructor, where all created nodes must be deleted


* Create one instance of `LinkedList` in the main program and test all methods.