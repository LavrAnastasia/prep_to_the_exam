#include <unistd.h>

int is_delim(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int first_word = 1;  // ещё не было слова

        // пропускаем пробелы в начале
        while (is_delim(av[1][i]))
            i++;

        while (av[1][i])
        {
            if (!is_delim(av[1][i]))
            {
                if (!first_word)
                    write(1, "   ", 3);  // только между словами
                first_word = 0;
				
                while (av[1][i] && !is_delim(av[1][i]))
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
            }
            else
                i++; // пропускаем пробелы между словами
        }
    }
    write(1, "\n", 1);
}
