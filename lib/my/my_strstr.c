/*
** EPITECH PROJECT, 2023
** my_strstr
** File description:
** my_strstr
*/

#include "./my.h"
#include <stdlib.h>

char *my_strstr(char *str, char const *to_find)
{
    int len_tofind = my_strlen(to_find);

    if (!*to_find) {
        return str;
    }
    for (; *str; str++) {
        if (my_strncmp(str, to_find, len_tofind) == 0) {
            return str;
        }
    }
    return NULL;
}
