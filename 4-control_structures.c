#include <stdio.h>
/*
 * A program to show some control structures
 *
 */
int main(void)
{
	int a;

	printf("Enter the number to check\n");
	scanf("%d", &a);

	if ( a <= 50 )
	{
		printf("It is less than\n");
	}
	else if ( a == 50)
	{
		printf("It is at 50\n");
	}
	else
	{
		printf("It is greater than");
	}
	if (a == 45 || a < 50 ? printf("Access granted!!") : printf ("Access denied!!"));

	return (0);
}
