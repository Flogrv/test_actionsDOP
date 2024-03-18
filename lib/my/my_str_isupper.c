/*
** EPITECH PROJECT, 2023
** my_str_isupper
** File description:
** my_str_isupper
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int lenstr = my_strlen(str);

    for (int i = 0; i < lenstr; i++) {
        if (!(str[i] >= 'A' && str[i] <= 'Z')) {
            return 0;
        }
    }
    return 1;
}
