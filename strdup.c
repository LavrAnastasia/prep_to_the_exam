/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:10:37 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/12 13:20:34 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	char *tmp;

	while(src[len])
		len++;
	tmp = malloc(sizeof(char) * len +1);
	if (!tmp)
		return (NULL);
	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return(tmp);
}

int main ()
{
	char *s;
	s = "lol";
	
	printf("%s\n", ft_strdup(s));
}