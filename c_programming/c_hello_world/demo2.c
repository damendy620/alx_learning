#include <stdio.h>
/**
 * main - entrypoint
 *
 * return - always 0
 *
 */
int main(void)
{
	char a,g,h;
	int i;

	scanf("%s %s %s %d", &a, &g, &h, &i);
	printf("my name is %s%s%s and i am %d years old.\n", a, g, h, i);
	return (0);
}
