
#include <stdlib.h>

int count_word (const char *str, char c)
{
	int count = 0;
	int is_in_word = 0;

	while(*str)
	{
		if(*str != c && is_in_word == 0)
		{
			count++;
			is_in_word = 1;
		}
		else if (*str == c)
			is_in_word = 0;
		str++; 
	}
	return(count);
}

char *fill_word (const char *str, char c)
{
	int i = 0;
	char *word;
	
	while(str[i] && str[i] != c)
		i++;
	word = malloc((i + 1)*sizeof(char));
	if(!word)
	return NULL;
	i = 0;
	while(str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);	
}

void *ft_free(char **res)
{
	int i = 0;
	if (!res)
	return NULL;
	while(res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return NULL;
}
char **ft_split (const char *s, char c)
{
	int j = 0;
	char **res;
	if (!s)
		return NULL;
	res = malloc((count_word(s,c)+1)*sizeof(char *));
	if (!res)
	return NULL;
	while (*s)
	{
		if (*s && *s != c)
		{
			res[j] = fill_word(s, c);
			if(!res[j])
				return (ft_free(res));
			j++;
			while (*s && *s != c)
			s++;
		}
		else 
		s++;
	}
	res[j] = NULL;
	return (res);
}


#include <stdio.h>
int	main(void)
{
	char	str[] = " hello world split test ";
	char	c = ' ';
	char	**result = ft_split(str, c);
	if (result)
	{
	for (int	i = 0; result[i] != NULL; i++)
	{
						printf("%s\n", result[i]);

	free(result[i]);
	}
	free(result);
	}
	return 0;
}