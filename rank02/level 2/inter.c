/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:04:22 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/12 16:07:28 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int char_seen(char c, char *str, int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
		{
			return(1);
		}
		i++;
	}
	return(0);
}

int main(int argc, char **argv)
{
	char *str1;
	char *str2;
	int i;
	int j;
	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	str1 = argv[1];
	str2 = argv[2];
	i = 0;
	while(str1[i] != '\0')
	{
		j = 0;
		while(str2[j] != '\0')
		{
			if (str1[i] == str2[j] && !char_seen(str1[i], str1, i))
			{
				write(1, &str1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return(0);
}