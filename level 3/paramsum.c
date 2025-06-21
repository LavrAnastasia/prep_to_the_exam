/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 13:08:01 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/13 13:44:49 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr(int num)
{
	if (num >= 10)
		putnbr(num / 10);
	char c = num % 10 + '0';
	write(1, &c, 1);
}
int main (int ac, char **av)
{
	(void)av;
	putnbr(ac -1);
	write(1, "\n", 1);
	return(0);
}