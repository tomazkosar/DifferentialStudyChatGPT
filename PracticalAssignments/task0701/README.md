# Task 7.1 (mandatory)

* Create a `VectorUtil.h` file to hold several function templates. The file should contain only functions (no classes).
  Write (see main program below):
    * A template function `fillDefault` that takes a vector and n as arguments and fills it with n-objects (calls the
      default
      constructor).
    * A `print` function template, which receives a vector and prints it.
    * A `reverse` function template that receives a vector as an argument and returns the vector in reverse order (not
      allowed to use libraries such as std::reverse).
    * A `mergeVectors` function template that receives a vector of vectors with objects as arguments and merges all
      vectors into one
      vector, which it then returns.
    * Make a specialisation of the `fillDefault` function template for the `int` type by not calling the default
      constructor but generate random values.

#### Further explanation:

The Point class has an additional function that allows it to be printed out as << without using the toString method.
Specifically
how this function works and how it is written will be covered later.

```c++
Point p(1,1);
// then we can print it out like this
std::cout << p << std::endl;
// it doesn't have to be like this
std::cout << p.toString() << std::endl;
```

An example of the main program:

  ```c++
#include <vector>
#include "ColorCode.h"
#include "VectorUtil.h"
#include "Point.h"

using namespace std;

int main() {
    vector<Point> list;
    cout << "Default generator of 3 objects" << endl;
    fillDefault(list, 3);
    print(list);

    vector<float> list2 = {1.1f, 1.2f, 1.3f};
    vector<float> list3 = reverse(list2);
    cout << "Reverse:" << endl;
    print(list3);

    vector<vector<float>> listOfLists = {list2, list3};
    cout << "Merge vectors:" << endl;
    print(mergeVectors(listOfLists));

    vector<int> listInt;
    cout << "Default generator of 3 objects" << endl;
    fillDefault(listInt, 3);
    print(listInt);
    return 0;
}
  ```

Output:

```
Default generator of 3 objects
(1, 1)
(2, 2)
(3, 3)
Reverse:
1.3
1.2
1.1
Merge vectors:
1.1
1.2
1.3
1.3
1.2
1.1
Default generator of 3 objects
2
8
5

Process finished with exit code 0
```

