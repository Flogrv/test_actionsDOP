/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/
#include "my.h"
#include <stdlib.h>

int nb_words(char const *str)
{
    int len = my_strlen(str);
    int nb_word = 0;
    int in_word = 0;

    for (int i = 0; i < len; i++) {
        if ((str[i] != 32 && str[i] != '\t') && !in_word) {
            in_word = 1;
            nb_word++;
        }
        if (str[i] == 32 || str[i] == '\t') {
            in_word = 0;
        }
    }
    return nb_word;
}

int word_length(const char *str)
{
    int length = 0;

    while (*str && (*str != ' ' && *str != '\t')) {
        length++;
        str++;
    }
    return length;
}

char **my_str_to_word_array(char const *str)
{
    int count_words = nb_words(str);
    char **words_arr = malloc((count_words + 1) * sizeof(char *));
    int idxarr = 0;
    int word_len = 0;

    while (*str) {
        while (*str && (*str == ' ' || *str == '\t')) {
            str++;
        }
        if (*str) {
            word_len = word_length(str);
            words_arr[idxarr] = my_strndup(str, word_len);
            idxarr++;
            str += word_len;
        }
    }
    words_arr[idxarr] = NULL;
    return words_arr;
}
