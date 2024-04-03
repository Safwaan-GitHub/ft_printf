Ft_Printf Project
Overview

The Ft_Printf project is a deep dive into C programming, aiming to replicate the functionality of the C standard library function printf. This project challenges you to reimplement printf, thereby deepening your understanding of variadic functions, string manipulation, and precision in output formatting. It's an excellent opportunity to explore the mechanics behind one of the most widely used C standard library functions, enhancing both your C programming skills and your understanding of computer science fundamentals.
Features

    Custom Format Specifiers: Supports various format specifiers, including %c, %s, %p, %d, %i, %u, %x, %X, and %% to handle characters, strings, pointers, and numbers in various bases.
    Precision and Width: Implements precision and width control, allowing for detailed formatting of the output.
    Variadic Functions: Utilizes variadic functions to accept an undefined number of arguments, mimicking the original printf behavior.
    Modular Code: Designed with modularity and scalability in mind, making it easy to extend with more features or format specifiers.

How It Works

    Function Prototype: int ft_printf(const char *format, ...);
    Implementation: Parses the format string for format specifiers and accordingly processes and outputs the subsequent arguments.
    Return Value: Returns the total count of printed characters, mimicking the original printf's behavior.

Usage

To use this custom ft_printf in your projects:

    Include the Header: Include the ft_printf.h header file in your C files.
    Compile with Your Project: Compile ft_printf along with your project files, ensuring it's linked correctly.
    Call ft_printf: Use ft_printf just as you would use the standard printf function.

Challenges and Learnings

    Variadic Functions: Mastering the use of variadic functions to handle a variable number of arguments.
    String Formatting: Developing a deep understanding of how string formatting works, including handling padding, alignment, and precision.
    Efficiency: Ensuring the implementation is efficient and robust, with an emphasis on speed and memory usage.
