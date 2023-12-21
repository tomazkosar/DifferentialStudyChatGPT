# Task 2.1 (mandatory)

Study the example `Point` in the lecture slides and write an `Exercise` class following the same pattern (
write `Exercise.h` and `Exercise.cpp`). Implement all the methods (even the shorter ones) in the `Exercise.cpp` file.

* The `Exercise` class represents an activity and must have the following instance variables:
  * `name` : `string`
  * `duration` : `float` ( represents the time in minutes)
  * `avgHeartRate` : `int`
* The `Exercise` class must have a constructor with three parameters.
* Write public methods: *get* (returns data) for each instance variable separately.
* Write a public method *set* (sets data) for one arbitrary instance variable.
* Write a public method `toString()` that returns a `string` containing all the activity data.
* Write a public method `print()` that prints all the activity data.
* Demonstrate the use of constructors and methods from the `Exercise` class in the main program. Create at least five objects
  where you demonstrate:
  * static and dynamic object allocation (of class `Exercise`)
  * the use of all methods of the `Exercise` class
