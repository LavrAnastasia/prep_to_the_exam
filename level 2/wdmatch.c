#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}

	char *s1 = av[1];
	char *s2 = av[2];
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		while (s2[j] && s2[j] != s1[i])
			j++;
		if (!s2[j]) // Если дошли до конца s2 и не нашли s1[i]
		{
			write(1, "\n", 1);
			return 0;
		}
		i++;
		j++;
	}
	write(1, s1, i);
	write(1, "\n", 1);
	return 0;
}
