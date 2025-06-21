#include <unistd.h>
int is_delim(char c)
{
	return (c == ' ' || c == '\t');
}
int main (int ac, char **av)
{
	int i = 0;
	char *str;
	str = av[1];
	if (ac == 2)
	{
		while (str[i])
			i++;
		i--;
		while (i >= 0 && is_delim(str[i]))
			i--;
		while (i >= 0 && !is_delim(str[i]))
			i--;
		i++;
		while(str[i] != '\0' && str[i] != is_delim(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
}