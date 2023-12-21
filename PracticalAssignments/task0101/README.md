# Task 1.1 (mandatory)

**Working with arrays:**

1. Study and use [example](example.cpp).
2. Modify the program so that 20 random numbers between 800 and 1000 are inserted into the array.
   The values represent the kilometers driven between each fill-up, where the tank is always filled with 60 liters.
3. Complete the program by displaying the average kilometers traveled over the 20 tank fills.
4. Complete the program by outputting the average fuel consumption per 100 km.
5. Complete the program by displaying the kilometers driven with the highest consumption (i.e. the fewest kilometers driven).
6. Write down the number of times we have managed to travel between 850 and 900 km with a full tank of fuel.

_The finished task must have six selections in the menu plus an exit selection. Within the menu, only call functions (like we did for generate and print) don't put all the code there._

Help with random number generation:

* [`std::rand`](https://en.cppreference.com/w/cpp/numeric/random/rand)
* [`std::random_device`](https://en.cppreference.com/w/cpp/numeric/random/random_device)