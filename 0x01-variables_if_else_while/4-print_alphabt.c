#include <stdio/h>
/**
* main - Print random number to variable
*
* Return: Always (success)
*/
int main(void)
{
char c;
for( c = 'a'; c <= 'z'; c++)
{
	if (c != 'a' && c != 'q')
	{
		putchar(c);
	}
}
putchar('\n');
return (0);
}
