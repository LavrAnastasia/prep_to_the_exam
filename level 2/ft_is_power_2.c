
int is_power_of_2(unsigned int n) 
{
    unsigned int num = 1;
    while (num <= n) 
	{
        if(num == n)    
            return 1;
        num *= 2;
    }
    return 0;
}

/* 
#include <stdio.h>
int main()
{
	printf("%d", is_power_of_2(16));
} */