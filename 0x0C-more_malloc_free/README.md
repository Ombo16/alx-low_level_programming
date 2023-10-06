# 0x0C. C - More malloc, free 💡

This directory contains a collection of C programs demonstrating the use of memory allocation and deallocation functions such as `malloc`, `free`, and `realloc`. as follows:


**Task 0 - Allocate Memory with `malloc`** ✨

File: 0-malloc_checked.c  
Allocates memory using `malloc` and returns a pointer to the allocated memory. If `malloc` fails, the program terminates with a status value of 98.

---

**Task 1 - Concatenate Strings with `string_nconcat`** ➕

File:1-string_nconcat.c  
Concatenates two strings and returns a pointer to the newly allocated memory. The resulting string contains `s1` followed by the first `n` bytes of `s2` and is null-terminated. If `n` is greater or equal to the length of `s2`, the entire `s2` is used. Returns NULL if allocation fails.  

---

**Task 2 - Allocate Memory for an Array with `_calloc`** 🌟

File: 2-calloc.c  
Allocates memory for an array of elements and returns a pointer to the allocated memory. The memory is set to zero. If `nmemb` or `size` is 0, or if allocation fails, returns NULL.  

---

**Task 3 - Create an Array of Integers with `array_range`** 📚

File: 3-array_range.c  
Creates an array of integers containing values from `min` to `max` (inclusive) in ascending order. Returns a pointer to the newly created array. If `min` is greater than `max` or if allocation fails, returns NULL.  

---

**Task 4 - Reallocate Memory with `realloc`** 🔃

File: 100-realloc.c  
Reallocates a memory block using `malloc` and `free`. Copies the contents of the old memory block to the new memory block, up to the minimum of the old and new sizes. If `new_size` is greater than `old_size`, the added memory is uninitialized. If `new_size` is 0, the function acts as `free(ptr)`. Returns NULL on failure.  

---

**Task 5 - Multiply Positive Numbers with `mul`** ✖️

File: 101-mul.c  
 A program that multiplies two positive numbers provided as command-line arguments. The result is printed followed by a newline. Handles incorrect usage and non-digit input gracefully.  
Usage:`./mul num1 num2`  
⚠️ If arguments are incorrect or not numeric, prints "Error" and exits with status 98.


