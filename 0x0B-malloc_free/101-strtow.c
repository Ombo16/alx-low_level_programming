#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - the function splits a string to words.
 * @str: the string to work on it.
 * Return: a pointer of the splited words.
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
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int word_length = 0;
    int in_word = 0;
    int a;

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
