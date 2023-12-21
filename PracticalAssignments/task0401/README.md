# Task 4.1 (mandatory)

Take the `Exercise` class (from Task 2.1) and the `Time` class (from Task 3.1). In addition, the class `Person` is
attached.

* Add a [`enum class`](https://en.cppreference.com/w/cpp/language/enum) `Difficulty` with values `Easy`, `Normal`,
  and `Hard`.
* Inside the `Exercise` class:
    * change the type of the instance variable `duration` from `float` to `Time`,
    * add the instance variable `difficulty` (`Difficulty`), and
    * fix the class accordingly (constructor, set/get, and toString).
* Add class `ExerciseTracker` with:
    * instance variables `exercises` (`vector<Exercise>`) and `trainee` (`Person*`),
    * a constructor with one parameter (it receives only the person),
    * an `addExercise` method that adds the exercise to the vector and
    * the `toString` method.
* The main program should contain two objects of class `ExerciseTracker` (at least three exercises each) and have the
  same trainee.

_When solving the problem, take into account all the knowledge you have acquired so far (use of the initialization list,
constant methods,
write down get/set methods where you need them, etc.)._