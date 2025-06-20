#include<unistd.h>

int main (int ac, char **av)
{
	int i = 0;
	char *str;
	int repeat;

	str = av[1];

	if (ac == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			repeat = str[i] - 'a' + 1;
			else if (str[i] >= 'A' && str[i] <= 'Z')
			repeat = str[i] -'A' + 1;

			int j = 0;
			while (j < repeat)
			{
				write (1, &str[i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}