/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** is_flag_present.c
*/

#include <stdbool.h>
#include <stdio.h>

bool is_flag_present(const char *args, char flag)
{
    for (int i = 0; args[i] != '\0'; i++) {
        if (args[i] == flag)
            return true;
    }
    return false;
}
