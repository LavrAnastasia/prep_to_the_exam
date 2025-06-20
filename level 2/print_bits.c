#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit = 0;

    while (i--)
    {
        bit = (octet >> i & 1) + 48; 
        write (1, &bit, 1); 
    }
}


/* if you want to test your code : */
int main()
{
	unsigned char octet = 3;
	print_bits(octet);
}
