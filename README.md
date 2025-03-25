# Ft_Printf Project

The Ft_Printf project is a deep dive into C programming, aiming to replicate the functionality of the C standard library function printf. This project is a reimplementation of printf, thereby deepening my understanding of variadic functions, string manipulation, and precision in output formatting. It's one of the most widely used C standard library functions, enhancing both my C programming skills and my understanding of computer science fundamentals.

## Table of Contents
- [Installation](#installation)
- [How-It-Works](#how-It-Works)
- [Features](#features)
- [Usage](#usage)
- [Challenges-and-Learnings](#challenges-and-learnings)

```
1. Clone the repository
- https://github.com/Safwaan-GitHub/ft_printf.git

2. Change directory
- cd ft_printf

3. Compile the program
- make
```

## Features

Custom Format Specifiers: Supports various format specifiers, including %c, %s, %p, %d, %i, %u, %x, %X, and %% to handle characters, strings, pointers, and numbers in various bases.
Precision and Width: Implements precision and width control, allowing for detailed formatting of the output.
Variadic Functions: Utilizes variadic functions to accept an undefined number of arguments, mimicking the original printf behavior.
Modular Code: Designed with modularity and scalability in mind, making it easy to extend with more features or format specifiers.

## How-It-Works

Function Prototype: int ft_printf(const char *format, ...);
Implementation: Parses the format string for format specifiers and accordingly processes and outputs the subsequent arguments.
Return Value: Returns the total count of printed characters, mimicking the original printf's behavior.

## Usage

Include the Header: Include the ft_printf.h header file in your C files.
Compile with Your Project: Compile ft_printf along with your project files, ensuring it's linked correctly.
Call ft_printf: Use ft_printf just as you would use the standard printf function.

## Challenges and Learnings

Variadic Functions: Mastering the use of variadic functions to handle a variable number of arguments.
String Formatting: Developing a deep understanding of how string formatting works, including handling padding, alignment, and precision.
Efficiency: Ensuring the implementation is efficient and robust, with an emphasis on speed and memory usage.
