#include<stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	char *res;

	while (src[i])
		i++;
	res = malloc((i + 1) * sizeof(char));
	if (!res)
		return NULL;
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* int main ()
{
	char *s;
	s = "lol";
	
	printf("%s\n", ft_strdup(s));
} */