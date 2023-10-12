#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...) {
    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; i++) {
        int num = va_arg(args, int);
        printf("%d", num);

        if (separator != NULL && i < n - 1) {
            printf("%s", separator);
        }
    }

    va_end(args);

    printf("\n");
}

int main() {
    // Example usage:
    print_numbers(", ", 5, 1, 2, 3, 4, 5);
    print_numbers(NULL, 3, 10, 20, 30);

    return 0;
}

