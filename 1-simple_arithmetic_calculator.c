#include <stdio.h>
/*
 * This is a calculator to do some arithmetic computations
 *
 */
int main(void)
{
	int a, b;

	printf("Please enter the first number\n");
	scanf("%d", &a);
	printf("Please enter the secomd number\n");
	scanf("%d", &b);
	printf("This are your values\n");
	printf("Addition of a + b is: %d\n", a + b);
	printf("Subtraction of a - b is: %d\n", a - b);
	printf("Division of a / b is: %d\n", a / b);
	printf("Multiplication of a * b is: %d\n", a * b);
	printf("Modulo of a mod b is:%d\n", a % b);

	return (0);
}
