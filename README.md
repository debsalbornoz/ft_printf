<h1 align="center">ft_printf</h1>

<div align="center">
 <img src="https://github.com/debsalbornoz/ft_printf/assets/119970138/bfc6c2e5-126e-4048-a6c7-fa247eb75ad6" alt="Ft_printf logo">
</div>

<div align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/Status-Finished-green">
<img alt="Static Badge" src="https://img.shields.io/badge/42-Project-blue">
<img alt="Static Badge" src="https://img.shields.io/badge/Language-C-lightgrey">
</div>

## About

**ft_printf** is a 42 School project that recreates the `printf` function entirely from scratch. It is used to display formatted data to the standard output (terminal).

The `ft_printf` function takes a format string as its argument, where format specifiers begin with `%`. The corresponding values for the variables or data to be displayed are passed after the format string. This function supports a variety of format specifiers for integers, strings, characters, pointers, and even numbers in different bases such as hexadecimal, allowing for detailed control over the output formatting.

It's an essential tool for displaying information in an organized and readable way during program execution. Widely used for debugging, displaying results, and interacting with the user, it's become an indispensable part of everyday C programming.

## Table of Contents

- [Supported Conversions](#supported-conversions)
- [How to Use](#how-to-use)
  - [Requirements](#requirements)
  - [Instructions](#instructions)

## Supported Conversions

| Format Specifier | Description |
| :---------------: | :--------- |
| `%` | Prints a `%` character. |
| `c` | Prints a single character. |
| `s` | Prints a string. |
| `p` | Prints an implementation-defined character sequence representing a pointer address. |
| `d` or `i` | Prints a signed integer in decimal representation. |
| `u` | Prints an unsigned integer in decimal representation. |
| `x` or `X` | Prints an unsigned integer in hexadecimal representation, lowercase (`x`) or uppercase (`X`). |

## How to Use

### Requirements

This project requires the `cc` compiler.

### Instructions

1. Clone the repository:

    ```bash
    git clone https://github.com/debsalbornoz/ft_printf.git
    ```

2. Build the library:

    ```bash
    make
    ```

3. Include the header in your code:

    ```c
    #include "ft_printf.h"
    ```

4. Compile the library together with your program and run it:

    ```bash
    cc -Wall -Wextra -Werror your_program.c libftprintf.a && ./a.out
    ```

---

<p align="center">Built as part of the 42 curriculum 🖥️</p>
