0x0F. C - Function Pointers

In this directory, the following C programs demonstrate the use of function pointers in C programming.


Print Name

0-main.c, 0-print_name.c, function_pointers.h  
The function `print_name` that takes a string (`char *name`) and a function pointer (`void (*f)(char *)`) as arguments and prints the name using the provided function.

---

Array Iterator 

1-main.c, 1-array_iterator.c, function_pointers.h  
A function `array_iterator` that takes an integer array (`int *array`), its size (`size_t size`), and a function pointer (`void (*action)(int)`) as arguments. It applies the provided function to each element of the array.

---

Integer Index

2-main.c, 2-int_index.c, function_pointers.h  
These define a function `int_index` that takes an integer array (`int *array`), its size (`int size`), and a function pointer (`int (*cmp)(int)`) as arguments. It searches for an integer in the array using the provided function and returns the index of the first match.

---

Calculator Program 🖩

3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h  
These three implements a calculator program that performs simple operations on two integer operands. The program takes the format `./calc num1 operator num2`, where `operator` can be `+`, `-`, `*`, `/`, or `%`. It prints the result of the operation.

- **3-calc.h:** Defines the structure `op_t` that holds an operator string and a corresponding function pointer.
- **3-op_functions.c:** Defines functions for addition, subtraction, multiplication, division, and modulo.
- **3-get_op_func.c:** Defines a function that selects the appropriate function based on the given operator.
- **3-main.c:** Main function to run the calculator program.


---

Print Main Function Opcodes

100-main_opcodes.c  
This program implements a program that prints the opcodes of its own main function. The program takes the format `./main number_of_bytes`, where `number_of_bytes` specifies the number of opcodes to print. The program uses the `objdump` command to disassemble its own binary and extract the opcodes.

