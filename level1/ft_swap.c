#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
// int main()
// {
//     int a = 5;
//     int b = 8;
//     ft_swap(&a, &b);
//     printf ("%d\n",a);
//     printf ("%d\n",b);
// }