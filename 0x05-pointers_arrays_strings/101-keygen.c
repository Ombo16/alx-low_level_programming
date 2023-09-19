#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 12

int main(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand((unsigned int)time(NULL));

	while (1)
	{
	
		for (i = 0; i < PASSWORD_LENGTH; i++)
	{
	int index = rand() % (sizeof(charset) - 1);
	password[i] = charset[index];
	}
	password[PASSWORD_LENGTH] = '\0';
	
	printf("Tada! Congrats\n");
	}

	return 0;
}
