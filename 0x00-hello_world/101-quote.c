#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int len = 59;

	write(2, quote, len);

	return (1);
}
