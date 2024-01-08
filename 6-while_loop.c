#include <stdio.h>
/*
 * A while loop
 *
 */
int main(void)
{
	int a;
	int i;

	printf("Enter how many loops you want\n");
	scanf("%d", &a);

	i = 0;
	while (i < a)
	{
		if (i == 5)
		{
			continue;
		}
		if (i == 10)
		{
		
			break;
		}
		printf("%d\n", i);
			i += 1;
	}
	return(0);
}
