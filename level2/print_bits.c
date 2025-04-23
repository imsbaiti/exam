#include <unistd.h>
void	print_bits(unsigned char octet)
{
    unsigned char bit;
    int i = 8;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1,&bit,1);
    }
}
int main()
{
    unsigned char octet = 5;
    print_bits(octet);
}





void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write (1,&bit,1);
    }
}