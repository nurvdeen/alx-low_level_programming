/**
* leet - function name
* @x: our str
*
* Description: a function that encodes str to 1337
* Return: address of result
*/

char *leet(char *str)
{
	int i, j;
	char x[] = "aAeEoOTlL", y[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
			}
		}
	}
	 return (str);
}
