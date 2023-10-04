/**
 * create_array - function that creates an array of characters
 * and initializes them to a given character
 *@size: size of the array
 *@c: the char pointer passed
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		return (0);
	}

	char *ptr = (char *)malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		printf("%c", ptr[i]);
	}

	return (ptr);
}
