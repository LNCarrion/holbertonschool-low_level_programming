/**
 * leet - Encodes a string into 1337.
 *
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_replace[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_codes[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_replace[j])
			{
				str[i] = leet_codes[j];
				break;
			}
		}
	}

	return (str);
}

