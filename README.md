# typesig #

## A simple header-only library for producing runtime strings from compile-time types ##

### Usage ###
```Cpp
#include "typesig.hpp"
```

Use `typesig::signature<T>()` or `typesig::signature(value)` to get a human-readable description of the type `T` or the type of value `value` (truncated to 255 symbols). The machinery used for most compilers is _not_ based on RTTI, but still _cannot_ be used as a reliable source of type information.

`Examples/usage.cpp` contains a number of examples for running the functions included in the library:

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
## The output ##
### Visual Studio 2013 Ultimate ###
```
class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
class std::vector<struct abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst...
unsigned __int64
signed char
unsigned char
char
volatile const __int64*const &
unsigned __int64
const char[6]
class std::_Vb_iterator<struct std::_Wrap_alloc<class std::allocator<unsigned int> > >
```
### gcc 4.3-4.9 ###
```
std::basic_string<char>
std::vector<abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefg...
long long unsigned int
signed char
unsigned char
char
const volatile long long int* const&
long long unsigned int
char [6]
std::_Bit_iterator
```
### clang 3.1 ###
```
std::basic_string<char>
std::vector<abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefg...
unsigned long long
signed char
unsigned char
char
const volatile long long *const &
unsigned long long
char [6]
std::_Bit_iterator
```
### clang 3.8.1 ###
```
std::__cxx11::basic_string<char>
std::vector<abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefg...
unsigned long long
signed char
unsigned char
char
const volatile long long *const &
unsigned long long
char [6]
std::_Bit_iterator
```