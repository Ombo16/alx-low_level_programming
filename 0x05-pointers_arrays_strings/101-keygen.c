#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const char expected_password[] = "Tada! Congrats";
    int i;

    srand((unsigned int)time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("Generated password: %s\n", password);

    if (strcmp(password, expected_password) == 0)
    {
        printf("Tada! Congrats\n");
    }

    return 0;
}
