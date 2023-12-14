#include <stdio.h>

/* Function prototype for custom _puts */
void _puts(char *str);

/**
* main_pus - Entry point 
*
* Return: Always 0 (Success)
*/
int main_pus(void)
{
/* Using the standard puts function */
puts("\"Programming is like building a multilingual puzzle");

/* Using custom _puts function */
_puts("\"Custom _puts function is working!");

return (0);
}

/* Function definition for custom _puts */
void _puts(char *str)
{
/*
* _puts - Custom function to print a string followed by a newline.
*
* @str: The string to be printed.
*
* This function prints the provided string followed by a newline character.
*/
printf("%s\n", str);
}
