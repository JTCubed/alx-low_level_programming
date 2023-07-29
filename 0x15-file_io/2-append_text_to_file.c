#include "main.h"

/**
 * _strlen - reads text from file
 * @text_content: number of letter to count
 * Return: int
 */

int _strlen(char *text_content)
{
	int n;

	for (n = 0; text_content[n] != '\0'; n++)
		;
	return (n);
}

/**
 * append_text_to_file - reads text from file
 * @filename: name of the file
 * @text_content: number of letter to read
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o = open(filename, O_WRONLY | O_APPEND);

	ssize_t s;

	if (o == -1)
	{
		close(o);
		return (-1);
	}
	else
	{
		s = write(filename, text_content, _strlen(text_content))
	}

	if (filename == NULL)
	{
		close(o);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(o);
		return (-1);
	}
}
