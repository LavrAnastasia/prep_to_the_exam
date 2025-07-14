#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int len = 0;
	int i = 0;
	int *res;

	if (start < end)
		len = end - start +1;
	else 
		len = start - end +1;

	res = malloc(sizeof(int)* len);
	if (!res)
		return NULL;
	while (i < len)
	{
		res[i] = end;
		if(start < end)
			end--;
		else 
			end++;
		i++;
	}
	return (res);
}

#include<stdio.h>
int main() {
    int *tab = ft_rrange(9, 1);
    for (int i = 0; i < 9; i++)
        printf("%d\n", tab[i]);
    free(tab);
    return 0;
}