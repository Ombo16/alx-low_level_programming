#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_number - Checks if a string is a positive number
 *
 * @str: The string to check
 *
 * Return: true if str is a positive number, false otherwise
 */
bool is_positive_number(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return false;
        }
        str++;
    }
    return true;
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        if (is_positive_number(argv[i])) {
            int num = atoi(argv[i]);
            sum += num;
        } else {
            printf("Error\n");
            return 1;
        }
    }

    printf("%d\n", sum);

    return 0;
}
