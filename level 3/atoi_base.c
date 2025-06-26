
int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int val;

	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}

	while (str[i])
	{
		char c = str[i];
		if(c >= 'A' && c <= 'Z')
			c = c + 32;
		if (c >= '0' && c <= '9')
			val = c - '0';
		else if (c >= 'a' && c <= 'z')
			val = c - 'a' + 10;
		else 
			break;
		if (val >= str_base)
			break;
		result = result * str_base + val;
		i++;

	}
	return (sign*result);
	
}
#include <stdio.h>
int main ()
{
	char *str;
	str = "ac";
	printf("%d", ft_atoi_base(str, 16));
}