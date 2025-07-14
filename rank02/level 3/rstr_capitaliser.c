int is_delim (char c)
{
    return (c == ' ' || c == '\t');
}

void cap(char *s)
{
    int i = 0;
    while(s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] +32;
        if((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] == '\0' || is_delim(s[i+1])))
        s[i] = s[i] -32;
        write(1, &s[i], 1);
        i++;
    }
}

int main (int ac, char ** av)
{
    int i = 1;
    if(ac == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
   
     while(i < ac)
        {
            cap(av[i]);
            write(1, "\n", 1);
            i++;
        }
    
}