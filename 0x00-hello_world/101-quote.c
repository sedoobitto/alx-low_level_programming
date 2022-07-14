#include <stdio.h>
#include <unistd.h>
/**
* main - prints exactly and that piece of art is useful
* - Dora Korpar
* followed by a new line, to the standard error.
* Return: Always 1 (Success)
*/
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quote, 59);
return (1);
}
