#include "main.h"
/**
<<<<<<< HEAD
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
=======
* _puts_recursion - prints a string followed by a new line
*@s:character to be printed
*Return:returns void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
>>>>>>> 6f366d1e6905896f1c0ddae5598ab8dbf7f00c82
}
