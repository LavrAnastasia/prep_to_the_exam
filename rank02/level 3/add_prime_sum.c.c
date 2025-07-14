#include <unistd.h>

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int is_prime(int n)
{
	if(n < 2)
		return 0;
	int i = 2;
	while (i <= n/2)
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_atoi(char *str)
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
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int main (int ac, char **av)
{
	if(ac != 2 || ft_atoi(av[1]) <= 0)
	{
		write(1, "\n", 1);
		return 0;
	}
	int n = ft_atoi(av[1]);
	int sum = 0;

	while(n > 1)
	{
		if(is_prime(n))
			sum = sum + n;
		n--;
	}
	ft_putnbr(sum);
	write(1, "\n" , 1);
}