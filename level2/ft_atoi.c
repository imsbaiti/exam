#include <stdio.h>
int ft_atoi(const char *str)
{
    int i = 0;
    int signe = 1;
    int res = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            signe = -1;
        i++;
    }
    while (str[i] >= '0'  && str[i] <= '9')
    {
        res = res * 10 - str[i] + '0';
        i++;
    }
    return (signe * res);

}
int main()
{
    char *str = "132g";
    printf ("%d\n",ft_atoi(str));
}