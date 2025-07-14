#include<unistd.h>

void ft_putnbr(int n)
{
	if (n > 9 )
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}
int ft_atoi (char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}	
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int main (int ac, char **av)
{
	if(ac == 2)
	{
		if (!av[1])
		{
			write(1, "\n", 1);
			return 0;
		}
		
		int i = 1;
		int n = ft_atoi(av[1]);
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i*n);
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}

