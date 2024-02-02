#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list.
 * @head: pointer to a pointer to the head of the list.
 * @str: pointer to a string.
 *
 * str needs to be duplicated.
 * You are allowed to use strdup.
 *
 * Return: The address of the new element or NULL if it failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	/* if it fails, return NULL */
	if (new_node == NULL)
		return (NULL);
	/* loop through the string to find the length */
	while (str[length])
		length++;
	/* assign the length to the new_node */
	new_node->len = length;
	/* duplicate the string and assign it to the new_node */
	new_node->str = strdup(str);
	/* make the new_node the first node in the list */
	new_node->next = *head;
	/* update the head pointer to point to the new_node */
	*head = new_node;
	/* return the new_node */
	return (new_node);
}
