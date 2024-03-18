/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }
    return count;
}
