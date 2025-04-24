#include <stdio.h>
int     ft_atoi_base(const char *str, int str_base)
{
    int i = 0, res = 0, signe = 1, dijit;

    if (!str || (str_base < 2 || str_base > 16))
        return (0);
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            signe == -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            dijit = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            dijit = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            dijit = str[i] - 'A' + 10;
        else
            break;
        if (dijit >= str_base)
            break;
        res = res * str_base + dijit;
        i++;
    }
    return (res * signe);
}









// int    ft_atoi_base(const char *str, int str_base)
// {
//     int i = 0, res = 0, signe = 1, dijit;
//     if (!str || (str_base < 2 || str_base > 16))
//         return (0);
//     if (str[i] == '-' || str[i] == '+')
//     {
//         if (str[i] == '-')
//             signe == -1;
//         i++;
//     } 
//     while (str[i])
//     {
//         if (str[i] >= '0' && str[i] <= '9')
//             dijit = str[i] - '0';
//         if (str[i] >= 'a' && str[i] <= 'f')
//             dijit = str[i] - 'a' + 10;
//         else if (str[i] >= 'A' && str[i] <= 'F')
//             dijit = str[i] - 'A' + 10;
//         else
//             break;
//         if (str_base >= dijit)
//             break;
//         res = res * 10 + str[i] - dijit;
//         i++
//     }
//     return (res * signe);  
// }
