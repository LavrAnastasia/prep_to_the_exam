#include<stdlib.h>

int is_delim (char c)
{
    return (c == ' '|| c == '\t' || c == '\n');
}

int count_word(char *str)
{
    int is_in_word = 0;
    int count= 0;

    while(*str)
    {
        if(!is_delim(*str) && is_in_word == 0)
        {
            count++;
            is_in_word = 1;
        }
        else if(is_delim(*str))
            is_in_word = 0;
        str++;
    }
    return(count);
}

char *fill_word(char *str)
{
    int i = 0;
    char *word;

    while(str[i] && !is_delim(str[i]))
        i++;
    word = malloc((i + 1)* sizeof(char));
    if(!word)
        return NULL;
    i = 0;
    while(str[i] && !is_delim(str[i]))
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_free(char **res)
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

char **ft_split(char *s)
{
    int j = 0;
    char **res;
    if(!s)
        return NULL;
    res = malloc((count_word(s)+1)* sizeof(char*));
    if(!res)
        return NULL;
    while(*s)
    {
        if(!is_delim(*s))
        {
            res[j] = fill_word(s);
            if(!res[j])
                return (ft_free(res));
            j++;
            while(*s && !is_delim(*s))
            s++;
        }
        else 
        s++;
    }
    res[j] = NULL;
    return (res);
}