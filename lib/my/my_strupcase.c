/*
** EPITECH PROJECT, 2023
** my_strupcase
** File description:
** my_strupcase
*/

#include "my.h"

char *my_strupcase(char *str)
{
    int lenstr = my_strlen(str);

    for (int i = 0; i < lenstr; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
    return str;
}
