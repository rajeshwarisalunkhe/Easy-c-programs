// 17 program to print multiplication table

#include <stdio.h>

int main(void)
{
	int num, i, product;
	printf("enter number of which table has to be formed:");
	scanf("%d",&num);

	for(i = 1;i < 11;i++)
	{
		product = num * i;
		printf("%d\t",product);
	}
	printf("\n");
}
