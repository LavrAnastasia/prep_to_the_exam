#include <unistd.h>

char	**ft_split(const char *s, char c);

int	main(int ac, char **av)
{
		if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char **w = ft_split(av[1], ' ');
	if (!w)
	return (1);
	
	int i = 0;
	while (w[i])
		i++;

	i = i - 1;
	while (i >= 0)
	{
		int j = 0;
		while (w[i][j])
		{
			write(1, &w[i][j], 1);
			j++;
		}
		if (i > 0)
			write(1, " ", 1);
		i--;
	}
	write(1, "\n", 1);
}
