/*
** EPITECH PROJECT, 2023
** my_strcpy
** File description:
** create func that copie string into another with limit
*/

int my_strncpy_helper(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }
    return count;
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int len = my_strncpy_helper(src);

    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    if (n > len) {
        dest[n] = '\0';
    }
    return dest;
}
