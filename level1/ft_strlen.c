#include <stdio.h>
int ft_strlen (char *str)
{
    int len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);
}
// int main()
// {
//     char *str = "imad";
//     printf ("len ====>%d\n",ft_strlen(str));
// }