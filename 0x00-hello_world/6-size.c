#include <stdio.h>

/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zer otherwise
*/
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of char: %i byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
printf("Size of a float: %i byte(s)\n", sizeof(float));
fprintf(stderr, "%s", "[Anything]\n");
return (0);
}
