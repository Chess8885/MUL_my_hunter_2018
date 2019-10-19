/*
** EPITECH PROJECT, 2018
** duck hunt
** File description:
** functions call back
*/

#include <stdlib.h>
#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i]) {
        if (s1[i] < s2[i]) {
            return (-1);
        }
        if (s1[i] > s2[i]) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}

int check_help(int ac, char **av)
{
    if (ac > 1 && my_strcmp(av[1], "-h") == 0) {
        my_putstr("This is the help command.\nUsage is: [./my_hunter]\n");
        return (-1);
    } else {
        return (0);
    }
}
