# Task 3.1 (mandatory)

* Write a class `Time` that should have:
    * private instance variables:
        * `hours` : `unsigned int`
        * `minutes` : `unsigned int`
        * `seconds` : `unsigned int`
    * class variables:
        * `MaxHours` - a constant and represents the upper limit for hours, namely 24 (< 24)
        * `MaxMinutes` - a constant and represents an upper limit for minutes, namely 60 (< 60)
        * `MaxSeconds` - a constant and represents the upper limit for seconds, namely 60 (< 60)
    * a public constructor with three parameters (be careful to set values only if the time is valid, otherwise set
      all values to 0),
    * a public method `toString` that returns the time as a `string` in the format hh:mm:ss (e.g. 14:05:30),
    * a public class method `isTimeValid(unsigned int hours, unsigned int minutes, unsigned int seconds)`, which checks whether
      time is possible based on the given data. The maximum values to be considered are 23:59:59. Example: `isTimeValid(14, 3, 43)`
      returns `true`, `isTimeValid(16, 67, 91)` returns `false`.
    * a public class method `parse(std::string time)` which receives the time in the string format hh:mm:ss, parses the
      the individual values and returns the time as an object of type `Time`

In the main program, create at least five different objects of class `Time` and demonstate all methods.

* Other guidance on solving the task:
    * If you need a `get` or `set` method (for an instance variable), implement it.
    * Use the `this` pointer only when it is necessary.
    * In a task, use the `const` in all methods where it makes sense.
    * [`substr`](https://www.cplusplus.com/reference/string/string/substr/)