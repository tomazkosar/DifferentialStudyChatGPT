# Task 10.1 (mandatory)

Use and extend *Task 5.1* as instructed below.

1. Extend the task by supporting the following calls to the `sort` method in the main program, using the function as
   parameter:
    ```
    tracker.sort(ascendingTime);
    std::cout << tracker.toString();

    tracker.sort(ascendingDifficulty);
    std::cout << tracker.toString();
    ```

   To do this, write the following:
    - Add the `sort` method to the `ExerciseTracker` class:

   `void sort(bool (*c)(Exercise*, Exercise*));`

   The `sort` method arranges the `vector` of `exercises` in the `ExerciseTracker` class, as requested by the function
   that receives it as a parameter.

    - For the needs of the `sort` method, implement further functions (outside the `ExerciseTracker` class, they can be
      above `main`) `ascendingTime` and `ascendingDifficulty`.

2. In the main program, enable the following line of code to find the first workout that is aerobic (meaning an average
   heart rate between 120 and 150).

   ```
   Exercise* findAerobic = tracker.find(isAerobicExercise);
   if(findAerobic != nullptr)
   std::cout << findAerobic->toString();
   else
   std::cout << "no aerobic exercise";
   ```

   To do this, write the following:
    - Add the `find` method to the `ExerciseTracker` class:

   `Exercise* find(bool (*c)(Exercise*));`

   The `find` method returns the first element of the `vector` of `exercises` in the `ExerciseTracker` class that
   matches the condition. To implement, use the `find_if` function from the `algorithm`
   library: http://www.cplusplus.com/reference/algorithm/find_if/. The third parameter of the `find_if` function is the
   parameter of the `find` method (see above).

    - For the purpose of the `find` method, implement the `isAerobicExercise` function in the main program, which checks
      whether the heart rate is between 120 and 150.


3. In the main program, support the following line of code, which prints all *StrengthExercise* workouts
   from `ExerciseTracker`:
    ```
    PrintIfStrengthExercise strength;
    tracker.printExercises(strength);
    ```

   We need the following:
    - Add the `printExercises` method to the `ExerciseTracker` class:

   `void printExercises(PrintIfStrengthExercise i);`

   The `printExercises` method prints out all the workouts in the `ExerciseTracker` class, as required by the function
   type `PrintIfStrengthExercise`, which
   it receives as a parameter. To implement, use the `for_each` function from the
   `algorithm` library: http://www.cplusplus.com/reference/algorithm/for_each/. The third parameter of the
   function `for_each`
   is
   parameter of the `printExercises` method (see above).

    - For the `for_each` function, implement the `PrintIfStrengthExercise` class and overload the operator:

   `void operator()(Exercise* e);`

   In the above method you will need the reserved word `dynamic_cast` (
   example: https://en.cppreference.com/w/cpp/language/dynamic_cast).


4. Demonstrate the use of pointers to functions and function types in the main program.

