#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		char *str;

		str = av[1];
		while (str[i])
			i++;
		while (i--)
			write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}
		