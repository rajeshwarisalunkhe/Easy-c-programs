// 04 program to see number is positive or negaive

#include <stdio.h>

int main(void)
{
	int num;
	
	printf("enter a number:");
	scanf("%d",&num);

	// positive numbers
	if(num > 0)
	{
		printf("number is positive\n");
	}

	// zero
	else if(num == 0)
	{
		printf("number is 0\n");
	}

	// negative number
	else
	{
		printf("number is negative\n");
	}

}
