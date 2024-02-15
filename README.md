<h1 align="center">Ft_printf</h1>


<div align="center">
 <img src="https://github.com/debsalbornoz/ft_printf/assets/119970138/bfc6c2e5-126e-4048-a6c7-fa247eb75ad6">
</div> 
<div align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/Status-Finished-green">
</div>

<h2>About</h2> 

Ft_printf is a project from the 42 programming school where the printf function is recreated entirely from scratch. It is utilized to display formatted data on the standard output, typically on the console.


The ft_printf function takes a format string as an argument, where format specifiers begin with %. The corresponding values for the variables or data to be displayed are provided after the format string.

Furthermore, ft_printf provides a variety of format specifiers for integers, strings, characters, pointers, and even numbers in different bases, such as hexadecimal, enabling detailed formatting of the output.

It is an essential tool for displaying information in an organized and understandable manner for users during program execution. Widely used for debugging, displaying results, and user interaction, it has become an indispensable component of programming tasks.


<h2>Supported conversions</h2>


| Format specifier  | Description |
| :--------------:  | :------------- |
| %                 | prints a '%'.                   |
| c                 | prints a single character.      |
| s                 | prints a string.                |
| p                 | prints an implementation-defined character sequence defining a pointer address. |
| d or i            | prints a signed integer to decimal representation.|
| u                 | prints a unsigned integer to decimal representation. |
| x or X            | prints a unsigned integer to hexadecimal representation in lowercase (x) or uppercase(X). |

<h2>Usage</h2>

<h3>Requirements:</h3>

This project needs cc compiler.

<h3>Instructions:</h3>

•Clone the repository

```
git clone https://github.com/debsalbornoz/ft_printf.git
```

•To compile the library run: "make" and to use in your code include the header

```
#include "ft_printf.h"
```

•Compile the library with your program and execute

```
cc - Wall -Wextra -Werror your_program.c libftprintf.a && ./your_program
```

• Here is an simple example of how to use the function: 

```
#include "ft_printf.h"

int main(void)
{
 char test[14] = "Hello world!\n";

 ft_printf("%s", test);
}
```

The output:

```
Hello world!
```



