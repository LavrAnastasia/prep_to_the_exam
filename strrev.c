/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:05:07 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/12 15:00:44 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	char tmp;

	while (str[len])
		len++;
	while (i < len -1)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		len--;
		i++;
	}
	return(str);
}

int main ()
{
	char s[] = "HelloWorld";
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}