
// #include <unistd.h>

// int		main(int argc, char *argv[])
// {
// 	int		i;

// 	if (argc == 2)
// 	{
// 		i = 0;
// 		while (argv[1][i])
// 			i++;
// 		i--;
// 		while (argv[1][i] <= 32)
// 			i--;
// 		while (argv[1][i] > 32)
// 			i--;
// 		i++;
// 		while (argv[1][i] > 32)
// 			write(1, &argv[1][i++], 1);
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }


// #include <unistd.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
//     int i = 0;
//     if (ac == 2)
//     {
//         while (av[1][i])
//             i++;
//         i--;
//         while (av[1][i] == 32)
//             i--;
//         while (av[1][i] != 32)
//             i--;
//         i++;
//         while (av[1][i] && av[1][i] != 32)
//         {
//             write(1 ,&av[1][i],1);
//             i++;
//         }
//     }
//     write(1,"\n",1);
// }

#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
            i++;
        i--;
        while (av[1][i] == 32)
            i--;
        while (av[1][i] != 32)
            i--;
        i++;
        while (av[1][i] && av[1][i] != 32)
        {
            write(1,&av[1][i], 1);
            i++;
        }
    }
    write(1,"\n",1);
}




