// 26 program to convert binary to decimal


#include <stdio.h>

int main(void)
{
	int i = 1, add = 0, num, deno;
	printf("enter the number:");
	scanf("%d",&num);


	while(num > 0)
	{
		deno = num % 10;
		num = num / 10;
		add = add + (deno * i);
		i = i * 2;
	}
	printf("%d", add);
	printf("\n");
}
