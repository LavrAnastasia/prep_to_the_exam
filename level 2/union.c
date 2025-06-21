#include <unistd.h>

int char_seen(char *str, char c, int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;
	char str[256] = {0};

	i = 0;
	while(s1[i])
	{
		if (!char_seen(str, s1[i], i))
		{
			str[i] = s1[i];
			write(1, &s1[i], 1);
		}
		i++;
	}
	j = 0;
	while(s2[j])
	{
		if (!char_seen(str, s2[j], i + j))
		{
			str[i + j] = s2[j];
			write(1, &s2[j], 1);
		}
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}