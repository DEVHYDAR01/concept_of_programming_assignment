#include <stdio.h>
/*
 *
 * A do-while loop
 *
 */
int main(void)
{
	int a, i;

	scanf("%d", &a);

	i = 0;
	do
	{
		printf("%d\n", i);
		i++;
	}
	while (i < a);
	return(0);
}
