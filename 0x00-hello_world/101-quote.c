#include <stdio.h>
#include <unistd.h>

/**
* main - prints exactly and that piece of art is useful
* - Dora Korpar 
* followed by a new line, to the standard error.
* Return: standard error
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);return (1);
}
