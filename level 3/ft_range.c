#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int len = 0 ;
	int i = 0;
	int *res;
	if(start <= end)
		len = end - start +1;
	else
		len = start - end +1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return NULL;
	while(i < len)
	{
		res[i] = start;
		if(start < end)
			start++;
		else 
			start--;
		i++;
	}
	return (res);

}

#include<stdio.h>
int main() {
    int *tab = ft_range(9, 1);
    for (int i = 0; i < 9; i++)
        printf("%i\n", tab[i]);
    return 0;
}