// #include <unistd.h>
// int iter(char *str, char c, int len)
// {
//     int i = 0;
//     while (str[i] && i < len || len == -1)
//         if (str[i++] == c)
//             return(1);
//         return(0);
// }
// int main(int ac, char **av)
// {
//     int i = 0;
//     if (ac == 3)
//     {
//         while (av[1][i])
//         {
//             if (!iter(av[1], av[1][i], i) && iter(av[2], av[1][i], -1))
//                 write(1,&av[1][i],1);
//                 i++;
//         }

//     }
//     write (1,"\n",1);
// }




#include <unistd.h>

int check(char *str, char c, int index)
{
	int i = 0;
	while (index > i)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return(0);
}
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0, j;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j]) 
				{
					if (check(av[1], av[1][i], i) == 0) 
					{
						write(1, &av[1][i], 1);
					}
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

