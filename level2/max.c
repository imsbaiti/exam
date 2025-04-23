#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    unsigned int result;
    unsigned int i = 0;

    result = tab[i];
    while (i < len)
    {
        if (result < tab[i])
        {
            result = tab[i];
        }
        i++;
    }
    return (result);
}
int main()
{
    int arr[] = {2,4,7,8,9,6};
    unsigned int len = sizeof(arr)  / sizeof(arr[0]);
    printf("%d\n",max(arr,len));
}











