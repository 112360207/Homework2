#include <stdio.h>

int main()
{
	for (int a = 4; a > 0; a--)
	{
		for (int b = 0;b < a; b++) printf(" ");
		for (int b = 5; b > a; b--) printf("*");
		for (int b = 5; b > a + 1; b--) printf("*");
		printf("\n");
	}

	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < a; b++) printf(" ");
		for (int b = 5; b > a; b--) printf("*");
		for (int b = 5; b > a + 1; b--) printf("*");
		printf("\n");
	}
	return 0;
}