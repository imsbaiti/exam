#include <stdio.h>
char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}
// int main ()
// {
//     char *str = "iamd";
//     char str1[6] = "";
//     printf ("s2 == >%s\n",ft_strcpy(str,str1));
// }