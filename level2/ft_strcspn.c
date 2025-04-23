#include <stdio.h>
int ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;
    while (s[i])
    {
         j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return (i);
}
int main()
{
    char *s1 = "imadsbaiti";
    char *s2 = "sb";
    printf("%d\n",ft_strcspn(s1,s2));
}