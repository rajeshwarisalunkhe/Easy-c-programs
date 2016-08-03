// 24 program to generate fibonacci series

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num, *number, i;
	
	printf("how many numbers to generate:");
	scanf("%d",&num);
	number = malloc(sizeof(int) * num);
	number[0] = 0, number[1] = 1;

	for(i = 2; i < num;i++)
	{
		number[i] = number[i - 1] + number[i - 2];
	}
	for(i = 0; i < num; i++)
	{
		printf("%d\t",number[i]);
	}
	printf("\n");
}
