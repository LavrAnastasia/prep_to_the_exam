int	max(int* tab, unsigned int len)
{
	if (len == 0)
		return 0;

	int result = tab[0];
	unsigned int i = 1;

	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return result;
}
#include <stdio.h>

int main()
{
	int int_tab[] = {1, 3, 2, 10, 9};
	printf("%d\n", max(int_tab, 5));  // Выведет: 10
}
