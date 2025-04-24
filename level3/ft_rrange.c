#include <stdlib.h>
int     *ft_rrange(int start, int end)
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
        return(0);
    i = 0;
    while (start <= end)
    {
        range[i] = end;
        end--;
        i++;
    }
    return (range);
}
#include <stdio.h>
int main()
{
	int *arr = ft_rrange(-1, 7);

	for(int i = 0; i <= 8; i++)
		printf("%d  ", arr[i]);
	printf("\n");
	free(arr);
}
