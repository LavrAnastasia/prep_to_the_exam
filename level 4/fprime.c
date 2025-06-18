/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:41:39 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/18 11:34:24 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
	int i;
	int num;

	if (ac == 2)
	{
		i = 2;
		num = atoi(av[1]);
		if (num == 1)
		printf("1");
		while (i <= num)
		{
			if(num % i == 0)
			{
				printf("%d", i);
				if (num != i)
				printf("*");
				num = num /i;
			}
			else 
				i++;
		}
	}
	printf("/n");
}