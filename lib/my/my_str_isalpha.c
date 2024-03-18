/*
** EPITECH PROJECT, 2023
** my_str_is_alpha
** File description:
** my_str_is_alpha
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int lenstr = my_strlen(str);

    if (lenstr == 0) {
        return 1;
    }
    for (int i = 0; i < lenstr; i++) {
        if (!((str[i] >= 65 && str[i] <= 90)
            || (str[i] >= 97 && str[i] <= 122))) {
            return 0;
        }
    }
    return 1;
}
