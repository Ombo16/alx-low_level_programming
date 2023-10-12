#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char operator = argv[2][0];

    int result;

    if (operator == '+') {
        result = add(num1, num2);
    } else if (operator == '-') {
        result = sub(num1, num2);
    } else if (operator == '*') {
        result = mul(num1, num2);
    } else if (operator == '/') {
        if (num2 == 0) {
            printf("Error\n");
            return 100;
        }
        result = divi(num1, num2);
    } else if (operator == '%') {
        if (num2 == 0) {
            printf("Error\n");
            return 100;
        }
        result = mod(num1, num2);
    } else {
        printf("Error\n");
        return 99;
    }

    printf("%d\n", result);
    return 0;
}
