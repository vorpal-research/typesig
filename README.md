# typesig #

## A simple header-only library for producing runtime strings from compile-time types ##

`Examples/usage.cpp` contains a number of examples for running the functions included in the library.

```Cpp
std::cout << typesig::signature<std::string>() << std::endl;
std::cout << typesig::signature<std::vector<abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz> >() << std::endl;
std::cout << typesig::signature<unsigned long long>() << std::endl;
std::cout << typesig::signature<signed char>() << std::endl;
std::cout << typesig::signature<unsigned char>() << std::endl;
std::cout << typesig::signature<char>() << std::endl;
std::cout << typesig::signature<const volatile long long * const &>() << std::endl;
std::cout << typesig::signature<unsigned long long>() << std::endl;
std::cout << typesig::signature("hello") << std::endl;
std::cout << typesig::signature<typename std::vector<bool>::iterator>() << std::endl;
```