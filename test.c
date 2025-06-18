/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:39:33 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/17 16:15:57 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int char_seen(char c, char *str, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int main(int ac, char **av)
{
	int i;
	int j;

	char *s1;
	s1 = av[1];
	char *s2;
	s2 = av[2];

	if (ac == 3)
	{
		i=0;
		while (s1[i])
		{
			j = 0;
				while (s2[j])
				{
					if (s1[i] == s2[j] && !char_seen(s1[i], s1, i))
						{
							write(1, &s1[i], 1);
							break;
						}
						j++;
				}
				i++;								
		}
	}
	write(1, "\n", 1);
}