/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** print
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    if (str == 0 || str[i] == 0)
        return (84);
    while (str[i] != 0) {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
