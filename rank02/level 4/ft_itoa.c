#include <stdlib.h>
size_t ft_numlen (long long n)
{
	size_t len;
	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

char *ft_itoa(int n)
{
	size_t len;
	char *str;
	long long num;
	
	num = (long long)n;
	len = ft_numlen(num);
	str = malloc(len +1);
	if (!str)
	return NULL;
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}

#include <stdio.h>
int main (void)
{
	int n;
	n = 11234;
	printf("%s",ft_itoa(n));
}