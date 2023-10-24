#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Prototype of strtow */
char **strtow(char *str);

int main(void)
{
    char **tab;
    int i;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed to split the string\n");
        return (1);
    }

    for (i = 0; tab[i] != NULL; i++)
    {
        printf("%s\n", tab[i]);
        free(tab[i]);
    }

    free(tab);
    return (0);
}

char **strtow(char *str)
{
    if (str == NULL || str[0] == '\0')
        return NULL;

    int len = strlen(str);
    char **words = malloc((len + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int word_count = 0;
    int i = 0; // Moved declaration to the beginning of the block
    for (; i < len;)
    {
        while (str[i] == ' ')
            i++;

        if (str[i] == '\0')
            break;

        int j = i; // Moved declaration to the beginning of the block
        while (str[j] != ' ' && str[j] != '\0')
            j++;

        words[word_count] = malloc((j - i + 1) * sizeof(char));
        if (words[word_count] == NULL)
        {
            free(words);
            return NULL;
        }

        int k = 0; // Moved declaration to the beginning of the block
        for (; i < j; i++, k++)
            words[word_count][k] = str[i];
        words[word_count][k] = '\0';
        word_count++;
    }

    words[word_count] = NULL;
    return words;
}

