#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle"
 * Return: 0
 */
int main(void)
{
	int i;
	long int li;
	long long int lli;
	char c;
	float f;

	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
