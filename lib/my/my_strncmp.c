/*
** EPITECH PROJECT, 2023
** my_strncmp
** File description:
** compare two strings
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;

    while (i < n && *s1 && *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
        i++;
    }
    if (i == n) {
        return 0;
    } else {
        return (*s1 - *s2);
    }
}
