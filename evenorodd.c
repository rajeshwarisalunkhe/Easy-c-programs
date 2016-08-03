// 16 to find the given number is even or odd

#include <stdio.h>

int main(void)
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num == 0)
	{
		printf("you printed 0");
	}	
	else if(num % 2 == 0)
	{
		printf("%d is positive number\n", num);
	}
	
	else
	{
		printf("%d is negative number\n", num);
	}

}
