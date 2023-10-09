
0x0E. C - Structures, typedef

This directory contains programs that demonstrate how to initialize, and work with user-defined data types and structures in C.


Defining a New Struct Dog

dog.h  
The function defines a new type `struct dog` with the elements `name`, `age`, and `owner`. These elements represent a dog's name, age, and owner, respectively.

---

Initializing a Struct Dog with `init_dog` 

1-init_dog.c
This function initializes a variable of type `struct dog` with the provided values. It takes a pointer to a `struct dog` variable and assigns values to its `name`, `age`, and `owner` members.

---

Print a Struct Dog with `print_dog`

2-print_dog.c
This function prints the contents of a `struct dog` variable. This function takes a pointer to a `struct dog` variable and prints its `name`, `age`, and `owner` members. If any of the members are NULL, "(nil)" is printed in their place.

---

Defining a New Type `dog_t` for Struct Dog

dog.h  
This function defines a new type `dog_t` as a new name for the type `struct dog`. This typedef makes it easier to work with `struct dog` variables.

---

Creating a New Dog with `new_dog` 

4-new_dog.c  
This function creates a new `struct dog` and returns a pointer to it. It takes the values for `name`, `age`, and `owner`, creates a new dog with those values, and returns a pointer to the new dog.

---

Free Dogs with `free_dog`

5-free_dog.c  
This function frees the memory allocated for a `struct dog` variable created using `new_dog`. It takes a pointer to a `struct dog` variable and frees the memory allocated for it.

---
