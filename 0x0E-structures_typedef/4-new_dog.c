#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be evaluated
 * Return: The length of a string
 **/
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _strcpy - Copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: A pointer to the buffer in which we copy the string
 * @src: The string to be copied
 * Return: The pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a C program that creates a new dog.
 * @name: The given dog name
 * @age: The given dog age
 * @owner: The given dog owner
 * Return: The new struct dog (if success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nameLen = _strlen(name), ownerLen = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (nameLen + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (ownerLen + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
