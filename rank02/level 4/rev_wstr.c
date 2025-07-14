#include <unistd.h>

#include<stdlib.h>
#include<unistd.h>

int count_word(char *str, char c)
{
    int is_in_word= 0;
    int count = 0;

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
    return (count);
}

char *fill_word(char *str, char c)
{
    int i = 0;
    char *word;
    while(str[i] && str[i] != c)
        i++;
    word = malloc (( i +1) * sizeof(char));
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
    if(!res)
        return NULL;
    while(res[i])
    {
        free(res[i]);
        i++;
    }
    free(res);
    return NULL;
}

char ** ft_split(char *s, char c)
{
    int j = 0;
    char **res;
    if(!s)
        return NULL;
    res = malloc((count_word(s, c) +1) * sizeof(char*));
    if(!res)
        return NULL;
    while(*s)
    {
        if(*s && *s != c)
        {
            res[j] = fill_word(s, c);
            if(!res[j])
                return (ft_free(res));
            j++;
            while(*s && *s != c)
                s++;
        }
        else 
        s++;
    }
    res[j] = NULL;
    return (res);
}

int main (int ac, char **av)
{
    if(ac < 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    char **w = ft_split(av[1], ' ');
    if(!w)
        return 0;
    
    int i = 0;
    while(w[i])
     i++;
    
    i = i - 1;
    while(i >= 0)
    {
        int j = 0;
        while(w[i][j])
        {
            write(1, &w[i][j], 1);
            j++;

        }
        if( i > 0)
            write(1, " ", 1);
        i--;
    }
    write(1, "\n", 1);

}