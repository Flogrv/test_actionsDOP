/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** mini_printf.c
*/

#include "my.h"
#include <stdarg.h>

void check_str(va_list list)
{
    char *str = va_arg(list, char *);

    my_putstr(str);
}

void check_int(va_list list)
{
    int d = va_arg(list, int);

    my_put_nbr(d);
}

void check_char(va_list list)
{
    int c = va_arg(list, int);

    my_putchar(c);
}

void my_print_flags(va_list list, char flag)
{
    switch (flag) {
        case 's':
            my_putstr(va_arg(list, char *));
            break;
        case 'd':
        case 'i':
            my_put_nbr(va_arg(list, int));
            break;
        case 'c':
            my_putchar(va_arg(list, int));
            break;
        default:
        my_putchar('%');
    }
}

int mini_printf(const char *format, ...)
{
    va_list list;
    int i = 0;
    int len_format = my_strlen(format);

    va_start(list, format);
    while (i < len_format) {
        if (format[i] == '%') {
            i++;
            my_print_flags(list, format[i]);
        } else {
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(list);
    return i - 1;
}
