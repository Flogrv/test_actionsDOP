/*
** EPITECH PROJECT, 2023
** my_atoi
** File description:
** convert str to num
*/

#include "my.h"

int my_atoi(char *str)
{
    int num = 0;
    int i = 0;
    int sign = 1;

    while (str[i] == ' ') {
        i++;
    }
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        sign = 1;
        i++;
    }
    while (str[i] != '\0' && my_isnum(str[i])) {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return num * sign;
}
