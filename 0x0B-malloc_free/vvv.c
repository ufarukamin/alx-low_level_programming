#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: a string.
 * Return: the length of a string.
 */
int _strlen(char *s)
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    return (length);
}

int words_c(char *str)
{
    int i, count = 0, length = _strlen(str);

    for (i = 0; i < length; i++)
    {
        if (str[i] != ' ' && ((str[i + 1] == ' ') || i == (length - 1)))
        {
            count++;
        }
    }
    return count;
}



/**
 * strtow - returns a pointer to an array of strings (words)
 * 2 dimensional array of integers.
 * @str: a string
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
    char **array;
    int i, words, length, word_start, word_end, index = 0, k, start;

    if (str == NULL)
        return (NULL);
    words = words_c(str);
    length = _strlen(str);
    array = (char **)malloc(sizeof(char *) * words);
    if (array == NULL)
        return (NULL);
    for (i = 0; i < length; i++)
    {
        if (((i == 0 && str[i] != ' ') || ((i != 0) && str[i] != ' ' && str[i - 1] == ' ')) && i < length)
            word_start = i;
        if (str[i] != ' ' && (str[i + 1] == ' ' || i == (length - 1)))
            word_end = i;
        if ((word_end - word_start) >= 1)
        {
            array[index] = (char *)malloc(sizeof(char) * (word_end - word_start));
            if (array[index] != NULL)
            {
                return (NULL);
            }
            else
            {
                for (k = 0, start = word_start; k < (word_end - word_start) && start <= word_end; k++, start++)
                {
                    array[index][k] = str[start];
                }
		array[index][k] = '\0';
                index++;
            }
        }
    }
    return (array);
}

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
     
    }
    print_tab(tab);
    printf("%d", words_c("sjdjsbf sknsx oi   plpl h "));
    return (0);
}
