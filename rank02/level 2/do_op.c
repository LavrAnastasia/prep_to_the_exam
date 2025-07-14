#include<stdio.h>
#include<stdlib.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int a = atoi(av[1]);
		int b = atoi (av[3]);
		if (av[2][0] == '+')
			printf("%i\n", a + b);
		else if (av[2][0] == '-')
			printf("%i\n", a - b);
		else if (av[2][0] == '*')
			printf("%i\n", a * b);
		else if (av[2][0] == '/')
			printf("%i\n", a / b);
		else if (av[2][0] == '%')
			printf("%i\n", a % b);
	}
	else 
		printf ("\n");
	return 0;
}