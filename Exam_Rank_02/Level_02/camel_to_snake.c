#include <unistd.h>

void    ft_camel(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            write (1, "_", 1);
            *str = *str + ('a' - 'A');
        }
        write (1, str, 1);
        str++;
    }
}
int main (int ac, char **av)
{
    if (ac == 2)
        ft_camel(av[1]);
    write (1, "\n", 1);
    return (0);
}