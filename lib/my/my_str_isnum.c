/*
** EPITECH PROJECT, 2023
** my_str_isnum
** File description:
** my_str_isnum
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int lenstr = my_strlen(str);

    if (lenstr == 0) {
        return 1;
    }
    for (int i = 0; i < lenstr; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}
