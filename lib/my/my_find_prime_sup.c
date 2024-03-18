/*
** EPITECH PROJECT, 2023
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_find_prime_sup(int nb)
{
    if (nb == 1 || nb == 0) {
        return 2;
        }
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0) {
            nb++;
            }
        }
        return nb;
}
