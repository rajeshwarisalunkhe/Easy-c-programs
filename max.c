// 15 to find max of two numbers

#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("enter two numbers:");
	scanf("%d%d",&num1, &num2);
	if(num1 > num2)
	{
		printf("%d is maximum number\n", num1);
	}
	else
	{
		printf("%d is maximum number\n", num2);
	}

}
