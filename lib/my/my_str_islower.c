/*
** EPITECH PROJECT, 2023
** my_str_islower
** File description:
** my_str_islower
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int lenstr = my_strlen(str);

    for (int i = 0; i < lenstr; i++) {
        if (!(str[i] >= 'a' && str[i] <= 'z')) {
            return 0;
        }
    }
    return 1;
}
