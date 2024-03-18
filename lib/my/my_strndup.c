/*
** EPITECH PROJECT, 2023
** my_strndup
** File description:
** my_strndup.c
*/

#include "my.h"
#include <stdlib.h>

char *my_strndup(const char *src, int n)
{
    int len_str = my_strlen(src);
    int copy_len = len_str;
    char *str = NULL;

    if (len_str > n) {
        copy_len = n;
    }
    str = malloc((copy_len + 1) * sizeof(char));
    if (str != NULL) {
        my_strncpy(str, src, copy_len);
        str[copy_len] = '\0';
    }
    return str;
}
