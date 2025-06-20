#include <unistd.h>

char	**ft_split(const char *s, char c); 

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	char **words = ft_split(av[1], ' ');
	if (!words)
		return (1);

	int i = 1;
	while (words[i])
	{
		int j = 0;
		while (words[i][j])
			write(1, &words[i][j++], 1);
		write(1, " ", 1);
		i++;
	}

	// теперь печатаем первое слово
	int k = 0;
	while (words[0][k])
		write(1, &words[0][k++], 1);

	write(1, "\n", 1);
	return (0);
}
