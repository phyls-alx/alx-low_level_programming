#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

char reversed_letter;

for (reversed_letter = 'z'; reversed_letter >= 'a'; reversed_letter--)
putchar(reversed_letter);

putchar('\n');

return (0);
}
