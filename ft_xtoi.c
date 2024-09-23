#include "libft.h"
#include <stdio.h>

int ft_xtoi(char *hex)
{
    char i;
    int x;
    const char base;

    if (!hex)
        return (NULL);
    i = 0;
    while (hex[i] != '\0')
        hex[i] = ft_tolower(hex[i]);
    if (hex[0] != '0' && (hex[1]) != 'x')
        perror("Not a valid hexadecimal string");
    base = "0123456789abcdef";
    i += 2;
    while (hex[i] != '\0')
    {



    }
}

//int main(void)
//{
    //printf("hex1: %d\n", 0xff00); soon iguales
    //printf("hex3: %d\n", 0x00ff00);
//}
