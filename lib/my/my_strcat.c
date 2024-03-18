/*
** EPITECH PROJECT, 2023
** my_str_cat
** File description:
** my_str_cat
*/

char *my_strcat(char *dest, char const *src)
{
    char *ptr = dest;

    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}
