#include "main.h"

/**
 * _strlen- reads text from file
 * @text_content: str to count
 * Return: size of str
 */

int _strlen(char *text_content)
{
	int n;

	for (n = 0; text_content[n] != '\0'; n++)
		;

	return (n);
}

/**
 * create_file - creates file
 * @filename: name of the file
 * @text_content: number of letter to read
 * Return: string
 */

int create_file(const char *filename, char *text_content)
{
	int o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	ssize_t l;

	char *n = "fails";

	if (filename == NULL)
	{
		close(o);
		return (-1);
	}

	if (o == -1)
	{
		write(STDERR_FILENO, n, _strlen(n));
		close(o);
		return (-1);
	}
	if (text_content != NULL)
	{
		l = write(o, text_content, _strlen(text_content));
		if (l == -1)
		{
			close(o);
			return (-1);
		}
	}

	close(o);
	return (0);
}
