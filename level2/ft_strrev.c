#include <stdio.h>
#include <stdlib.h>
char *ft_strrev(char *str)
{
    int i = 0;
    int count = 0;
    char tmp;
    while (str[count])
        count++;
    count--;
    while (i < count)
    {
        tmp = str[i];
        str[i] = str[count];
        str[count] = tmp;
        count--;
        i++;
    }
    return (str);
}
int main()
{
    char str[] = "imad";
    printf("%s\n",ft_strrev(str));
}