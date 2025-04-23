#include <stdlib.h>
#include <stdio.h>
char *ft_strdup(char *src)
{
    int i = 0;
    char *dest;
    int len = 0;
    dest = malloc(sizeof(char) * len);
    if (!dest)
        return (0);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int main()
{
    printf("%s\n",ft_strdup("imad"));
}


