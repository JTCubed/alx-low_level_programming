/**
 * is_palindrome - returns 1 if string is palindrome else 1
 * @s: string input
 * Return: 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + is_palindrome(s));

/**
 *	if (s <= 1)
 *	{
 *		return (1);
 *	}
 *
 *	return (0);
 */
}
