#include <stdio.h>
/*
 * A loop to illustrate a break and continue within a for loop
 *
 */
int main(void)
{
	int i;
	int a;

	printf("Enter the number of time you  want the loop to run\n");
	scanf("%d", &a);

	printf("FIND THE LOOP BELOW\n");
	for (i = 1; i <= a; i++)
	{
	
		if (i == 5)
		{
			continue;
		}

		if ( i == 7)
		{
			break;
		}
		printf("%d\n", i);
	}

	return (0);
}
