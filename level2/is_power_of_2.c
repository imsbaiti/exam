#include <stdio.h>
int	    is_power_of_2(unsigned int n)
{
    int nbr = n;
    if (nbr == 0)
        return(0);
    while (nbr % 2 == 0)
        nbr /= 2;
    if (nbr == 1)
        return (1);
    else
        return (0);
}
int main()
{
    printf("%d\n",is_power_of_2(0));
}





















