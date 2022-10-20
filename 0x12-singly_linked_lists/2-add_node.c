#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double pointer to a lined list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Initialize variable new to type node */
	list_t *new;

	/* Confirm that data field of node is not empty or null*/
	if (str == NULL)
		return (NULL);
	/* Allocate enough memory for new node using datatype definition*/
	new = malloc(sizeof(list_t));
	/*Confirm that memory is allocated*/
	if (new == NULL)
		return (NULL);
	/* Initialize dada field of new node*/
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	/* Initialize the length of the string in node using _strlen function*/
	new->len = _strlen(new->str);
	/* Move new node to start of list*/
	new->next = *head;
	*head = new;
	return (new);
}
