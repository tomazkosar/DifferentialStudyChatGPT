# Task 8.1 (mandatory)

Task [`LinearQueue`](https://www.javatpoint.com/data-structure-queue).

**Write everything in the `LinearQueue.h` file (without `.cpp`).**

Write a template class `LinearQueue` to simulate the operation of a FIFO queue ("first in first out"). To implement a
queue in the `LinearQueue` class, use `vector` of arbitrary elements (`std::vector<T> values`).

The class should have the following methods:

- `empty` - checks whether the queue is empty (returns `true`/`false`)
- `size` - returns the current number of elements in the row
- `element` - returns the element that is first in the row
- `add` - receives an element as a method parameter and adds it to the end of the queue
- `remove` - removes the first element from the queue, and if it is successful, the method returns `true`, otherwise it
  returns `false`
- `toString` - converts the type to `string`

In addition to the above methods, implement:

- `reverse` - reverses the order of the elements (first is last, etc.).
- `getMax` - returns the largest element in the row.
- Invent two additional methods of similar complexity, such as `reverse` and `getMax` (`getMin` is not allowed) over the
  queue.

Specialize the `LinearQueue` class for the `Time` class from the previous tasks (be careful with the toString and getMax
methods).

Demonstrate the use of all methods in the main program! Test the class template with the following types:
`int`, `float`, and `Time`.