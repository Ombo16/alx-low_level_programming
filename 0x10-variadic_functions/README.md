0x10. C - Variadic Functions 

This directory contains C programs that demonstrate the use of variadic functions in C programming.

Sum Them All

0-main.c, 0-sum_them_all.c, variadic_functions.h  
The function `sum_them_all` that returns the sum of all its parameters. The function takes an unsigned integer `n` and a variable number of integer parameters. If `n` is 0, the function returns 0.

---

Print Numbers

1-main.c, 1-print_numbers.c, variadic_functions.h  
The function `print_numbers` that prints a list of integers followed by a new line. The function takes a string `separator`, an unsigned integer `n`, and a variable number of integer parameters. If `separator` is NULL, it's not printed.

---

Print Strings

2-main.c, 2-print_strings.c, variadic_functions.h  
The function `print_strings` that prints a list of strings followed by a new line. The function takes a string `separator`, an unsigned integer `n`, and a variable number of string parameters. If `separator` is NULL, it's not printed. If a string parameter is NULL, `(nil)` is printed.

---

Print Anything

3-main.c, 3-print_all.c, variadic_functions.h  
This function `print_all` that prints a list of various types of values followed by a new line. The function takes a string `format` and a variable number of parameters of different types (char, int, float, char*). The format string specifies the types of arguments passed. The function handles 'c' for char, 'i' for int, 'f' for float, and 's' for char*. Any other character in `format` is ignored.

