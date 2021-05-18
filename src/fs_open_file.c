/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my_printf.h"

char **fs_open_file(char *file)
{
    struct stat sa;
    stat(file, &sa);
    char *buffer;
    int i;
    int fd = open(file, O_RDONLY);

    if (fd <= -1)
        exit(84);
    if (stat(file, &sa) == -1) {
        close(fd);
        exit(84);
    }
    buffer = malloc(sizeof(char) * sa.st_size);
    if (buffer == NULL)
        exit(84);
    read(fd, buffer, sa.st_size);
    close(fd);
    return my_array(buffer);
}