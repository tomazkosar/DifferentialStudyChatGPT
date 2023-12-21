# Task 10.2 (optional)

Write a class `Printer` that has:

- instance variable `queue` (`std::vector<std::string>`),
- a method `toString` that returns the contents of `queue` as a string,
- and the `print` method, which prints and clears the contents of `queue`.

1. In addition, it should have ([member template](https://en.cppreference.com/w/cpp/language/member_template), [variadic template](https://en.wikipedia.org/wiki/Variadic_template)):

- a method `add` that can receive a value of any type and insert it into `queue`
```c++
    printer.add("First job to print");
    printer.add(123123);
```
- the `add` method, which receives any number of values of any type and inserts them into the `queue`
```c++
    printer.add("qwert", "prog", 2);
```
- the `addMultiple` method, which receives a vector of any type and inserts it into the `queue`
```c++
    printer.addMultiple(std::vector<int>{12, 45});
```

2. From C++11 onwards, we have
   [std::function](https://www.geeksforgeeks.org/passing-a-function-as-a-parameter-in-cpp/) available, which allows us to
   pass a function as a parameter as an object. Implement the following methods in this way:

- the `remove` method, which receives a function as an argument and removes from the `queue` all elements that satisfy the condition given by
  function (std::remove_if is not allowed),
- the `sort` method, which takes a function as an argument and sorts the elements in the `queue` according to the function (std::sort is not allowed),
- the `checkAndCorrect` method, which takes two functions as arguments, one of which checks if the string is necessary
  to correct, while the other function takes care of the correction,
- and add two additional methods of your own.

3. In the main program:

- create an object of class `Printer` and fill it with the `add` and `addMultiple` methods.
- demonstrate methods that receive a function as a parameter, but in doing so
  use [lambda expression](https://learn.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170):
    - use the `remove` method to remove all elements in `queue` that have only 1 character (length = 1)
    - use the `remove` method to remove all elements in the `queue` that are also inside the vector, which should be
      defined before calling the remove method
      ```
      std::vector<std::string> vec = {"prog", "prog2"};
      printer.remove(//TODO);
      ```
    - use the `sort` method to arrange the strings in the `queue` according to the length of the string (from shortest to longest)
    - use the `checkAndCorrect` method to correct the strings in the `queue` so that they all start with a capital letter (in case it is
      the first character is something other than a letter, skip the string).
    - and demonstrate your added methods.
