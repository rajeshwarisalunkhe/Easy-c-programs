// 11 program to add n natural numbers from 1

#include <stdio.h>

int main(void)
{
	int num, i, addition = 0;

	printf("enter number upto which addition is required");
	scanf("%d",&num);

	for(i = 1; i <= num;i++)
	{
		addition = addition + i;
	}
	printf("addition upto %d is %d\n", num, addition);
	return 0;
}
