/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "my.h"

int my_put_nbr(long long n)
{
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
        my_put_nbr(n % 10);
    } else
        my_putchar(n + '0');
    return 0;
}
