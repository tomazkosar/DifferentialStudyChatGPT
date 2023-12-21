# Task 3.2 (optional)

Write a *TextUtility* class that should have a private default constructor.

Add public class methods to the class:

* `isAlphanumeric(const std::string &str)` - takes a string as an argument and checks whether the string contains only
  letters and digits.

_Example: "asd4234daas" --> true, "asdddd 234" --> false, "hudasu!" --> false_

* `difference(const std::string &str1, const std::string &str2)` - receives two strings and returns a string
  representing
  their difference/match. Where there is a match, we write the matching character, otherwise we write `-`. Also
  consider the case where the two strings are of different lengths, in which case add as many `-` as the difference
  in length.

```
  p1:     Lorem ipsum dolor sit magna aliqua ligula.
  p2:     De232 ipsum dolor 14 heuas baliqua.
  result: ----- ipsum dolor ----------aliqua--------
```

* `replace(const std::string &str, const std::string &searchStr, const std::string &replaceStr)` - receives three
  strings and returns a string that replaces **all** occurrences of the string `searchStr` with the string `replaceStr`
  in the string `str`.

```
replace("Lorem ipsum dolor sit amet consumetur sed sumeiusmod", "sum", "aaaaaaa")
result: Lorem ipaaaaaaaaa dolor sit amet conaaaaaaaaaetur sed aaaaaaaeiusmod
```

* Add another class method of your choice (make it text-bound)!

In the main program, demonstrate **all** methods. Call the methods with different arguments and in this way
check that the methods cover all possible scenarios.

[Help for working with strings in C++](https://en.cppreference.com/w/cpp/string/basic_string).
