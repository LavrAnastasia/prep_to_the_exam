#include <unistd.h>

int ft_atoi (char *str)
{
	int i = 0;
	int result = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result);
}

void put_hex(int nbr)
{
	char *digits =  "0123456789abcdef";

	if (nbr >= 16)
		put_hex (nbr / 16);
	char c = digits[nbr % 16];
		write(1, &c, 1);
}
int main (int ac, char **av)
{
	if (ac == 2)
		put_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return 0;
}