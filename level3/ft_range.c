#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i;
    int *range;
    int len;
     i = start;
     len = 0;
     while (i <= end)
     {
        len++;
        i++;
     }
     range = malloc(sizeof(int) * len);
     if (!range)
        return (0);
    i = 0;
    while (start <= end)
    {
        range[i] = start;
        start++;
        i++;
    }
    return (range);
}
#include "stdio.h"

int main()
{
	int	*arr = ft_range(-1, 5);

	for(int i = 0; i <= 6; i++)
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);
}
