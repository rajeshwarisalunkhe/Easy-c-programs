/*31 Write a c program to find out power of number.   
Enter number: 2
Power: 3

2^3  = 8*/


#include <stdio.h>

int main(void)
{

	int number, power, ans = 1, i;

	printf("enter the number:");
	scanf("%d", &number);
	printf("enter power:");
	scanf("%d", &power);

	// multiplying the given number upto power

	for(i = 0;i < power;i++)
	{
		ans = ans * number;
	}
	
	printf("ans is %d\n", ans);
}
