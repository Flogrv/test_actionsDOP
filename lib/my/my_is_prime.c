/*
** EPITECH PROJECT, 2023
** my_is_prime
** File description:
** func return 1 if n is prime 0 otherwise
*/

int my_is_prime(int nb)
{
    if (nb == 1 || nb == 0) {
        return 0;
        }
    for (int i = 2; i * i <= nb; i++) {
        if (nb % i == 0) {
            return 0;
            }
        }
        return 1;
}
