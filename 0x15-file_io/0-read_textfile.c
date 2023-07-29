#include "main.h"

/**
 * read_textfile: reads text from file
 * @filename: name of the file
 * @letters: number of letter to read
 * Return: string
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f = open(filename, O_RDWR);
	ssize_t l, t;
	char *s = (char *)malloc(letters);

	if (s == NULL)
	{
		return (0);
	}
	if (f == -1)
	{
		free(s);
		close(f);
		return (0);
	}

	if (filename == NULL)
	{
		close(f);
		return (0);
	}

	l = read(f, s, letters);
	if (l == -1)
	{
		free(s);
		close(f);
		return (0);
	}

	t = write(STDOUT_FILENO, s, l);
	if (t == -1)
	{
		free(s);
		close(f);
		return (-1);
	}
	return (t);
}
