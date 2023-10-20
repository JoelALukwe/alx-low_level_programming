#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a linked list
* @tully: pointer to the list_t list to print
*
* Return: the number of nodes printed
*/
size_t print_list(const list_t  *tully)
{
size_t s = 0;

while (tully)
{
if (!tully->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", tully->str, tully->len);
h = tully->next;
s++;
}
return (s);
}
