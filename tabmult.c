/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabmult.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:08:45 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/13 16:21:28 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
int is_delim (char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
void ft_putchar (char c)
{
	write(1, &c, 1);
}

void ft_putnbr (int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 1);
		return;
	}

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb/10);
	}
	ft_putchar (nb % 10 + '0');
}

int ft_atoi (char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (is_delim(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i]== '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result *sign);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		if(!*av[1])
		{
			write(1, "\n", 1);
			return(0);

		}

		int i = 0;
		int n = ft_atoi(av[1]);
		while (i <= 9)
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
}