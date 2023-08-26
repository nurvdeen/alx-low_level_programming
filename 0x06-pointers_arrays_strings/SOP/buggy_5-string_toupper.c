#include <stdio.h>
/**
 * _strlen - function name
 * @s: string to work with
 *
 * Description: a function that returns the length of a str
 * Return: length of string int
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);

}

/**
* string_toupper - function name
*
* Description: a function that converts lowercase to upper
* Return: address to resulting str
*/

char *string_toupper(char *str)
{
	int i, s_len;

	s_len = _strlen(str);
	printf("%i\n", s_len);
	for (i = 0; i < s_len; i++)
	{
		printf("%c\n", *str);
		if (str[i] >= 'a' && *str <= 'z')
		{
			str[i] -= 32;
			printf("str[i]:%c\n", str[i]);
		}
		str++;
	}
	return (str);
}
