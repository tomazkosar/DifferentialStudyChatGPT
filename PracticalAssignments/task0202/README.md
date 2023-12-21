# Task 2.2 (optional)

* Take your solution for Task 1.1.
* Study and use [example](example1.cpp) and rewrite Task 1.1 by replacing array
  with [`vector`](https://en.cppreference.com/w/cpp/container/vector).
* Write a class `FuelLog` that has the following instance private properties:
    * `kilometers` : `unsigned int`
    * `day` : `unsigned int`
    * `month` : `unsigned int`
    * `year` : `unsigned int`
    * `quantity`: `float`
* The data represent the number of kilometers driven according to the amount of fuel added on the defined date.
  Before we had a fixed amount of fuel (60 l), now it is based on individual filling, which is not necessarily a full
  tank (e.g. we topped up only 40 l). Change the methods accordingly.
* The class should contain a constructor with five arguments.
* Write public methods: *get* (returns data) for each property separately and *set* (sets data) only for
  the `kilometers` property.
* Add a `toString` method that returns all the data of the object.
* Add a `getConsumption` method that returns the fuel consumption per 100 km (float).
* Re-organize the main program in Task 1.1 so that `vector` contains pointers to objects of
  class `FuelLog` ([example](example2.cpp)).
