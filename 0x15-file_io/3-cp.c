#include "main.h"

#define BUFFER_SIZE 1024

/*
 * _strlen - counts number of letters
 * @content: str input
 * Return: number of chars
 */

int _strlen(char *content)
{
	int n;

	for (n = 0; content[n] != '\0'; n++)
		;

	return (n);
}

/**
 * main - creates file and copies content to it
 * @argc: number of args
 * @argv: parameters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	ssize_t l;
	int fd1, fd2;
	char *s = "Error: Can't read from file", buffer[BUFFER_SIZE];
	char *r = "Usage: cp file_from file_to";
	char *p = "Error: Can't write to", *u = "Error: Can't close fd";


	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "%s %s %s\n", r, argv[1], argv[2]);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", s, argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
	if (fd2 < 0)
	{
		close(fd1);
		dprintf(STDOUT_FILENO, "%s %s\n", p, argv[2]);
		exit(99);
	}
	while ((l = read(fd1, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd1, buffer, BUFFER_SIZE) != l)
		{
			close(fd1);
			close(fd2);
			dprintf(STDERR_FILENO, "%s %s\n", p, argv[2]);
			exit(99);
		}
	}
	if (l < 0)
	{
		close(fd1);
		close(fd2);
		write(STDOUT_FILENO, s, _strlen(s));
		exit(98);
	}
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "%s %d\n", u, fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "%s %d\n", u, fd2);
		exit(100);
	}
	return (0);
}
