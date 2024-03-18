/*
** EPITECH PROJECT, 2023
** my_revstr
** File description:
** function that reverse a string
*/

char *my_revstr(char *str)
{
    int len = 0;
    char tmp;

    while (str[len])
        len++;
    len -= 1;
    for (int i = 0; i < len; len--) {
        tmp = str[len];
        str[len] = str[i];
        str[i] = tmp;
        i++;
    }
    return str;
}
