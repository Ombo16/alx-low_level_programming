#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - takes an input string str and
 * counts the number of words in the string
 * strtow - the function splits a string to words.
 * @str: The input string to count words in
 * Return: The pointer to a new string or NULL if not found
 */
int count_words(char *str) {
	int count = 0;
	int in_word = 0;
	int a;

	for (a = 0; str[a] != '\0'; a++) {
		if (str[a] != ' ') {
			if (!in_word) {
				count++;
				in_word = 1;
			}
		} else {
			in_word = 0;
		}
	}

	return count;
}

char **strtow(char *str) {
	int num_words;
	char **words;
	int word_index;
	int word_length;
	int in_word;
	int a;

	if (str == NULL || *str == '\0') {
		return NULL;
	}

	num_words = count_words(str);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL) {
		return NULL;
	}

	word_index = 0;
	word_length = 0;
	in_word = 0;

	for (a = 0; str[a] != '\0'; a++) {
		if (str[a] != ' ') {
			if (!in_word) {
				in_word = 1;
				word_length = 1;
				words[word_index] = &str[a];
				word_index++;
			} else {
				word_length++;
			}
		} else if (in_word) {
			str[a] = '\0';
			in_word = 0;
		}
	}

	words[num_words] = NULL;

	return words;
}
