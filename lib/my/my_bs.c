/*
** EPITECH PROJECT, 2024
** my_bs
** File description:
** my_bs
*/

void swap(char *a, char *b)
{
    char temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

void bsort(char *str, int len)
{
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            swap(&str[j], &str[j + 1]);
        }
    }
}
