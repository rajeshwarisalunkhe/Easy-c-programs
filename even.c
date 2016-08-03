// 09 program to print even numbers of given range

#include <stdio.h>

int main(void)
{
	int first, last, i;

	printf("enter first number and last number of range:");
	scanf("%d%d",&first,&last);
	
	// first number is greater than last number
	if(first > last)
	{
		for(i = last;i <= first;i++)
		{
			if(i % 2 == 0)
			{
				printf("%d\t",i);
			}
		}
		printf("\n");
	}
	else if(first == last)
	{
		if(first %2 == 0)
		{
			printf("%d\t",first);
		}
		else
		{
			printf("no numbers\n");
		}
	}
	else
	{
	// first number is less than last number
		for(i = first;i <= last;i++)
		{
			if(i % 2 == 0)
			{
				printf("%d\t",i);
			}
		}
		printf("\n");
	}
	return 0;
}
