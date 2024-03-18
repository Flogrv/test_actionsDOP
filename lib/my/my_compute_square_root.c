/*
** EPITECH PROJECT, 2023
** my_compute_square_root
** File description:
** compute square root
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i * i < nb) {
        i++;
    }
    if (i * i > nb) {
        return 0;
    }
    return i;
}
