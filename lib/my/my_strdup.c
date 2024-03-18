/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** my_strdup
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int len_str = my_strlen(src);
    char *str = malloc((len_str + 1) * sizeof(char));

    if (str != NULL) {
        my_strcpy(str, src);
    }
    return str;
}
