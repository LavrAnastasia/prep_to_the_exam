/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:21:58 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/12 11:41:32 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if(s[i] == reject[j])
			return(i);
			j++;
		}
		i++;
	}
	return(i);

}

int main()
{
	char s [] = "hekk";
	char r [] = "mekk";
	size_t result = ft_strcspn(s, r); 
	printf("%zu", result);
}