// 25 a program to convert decimal to binary


#include <stdio.h>

int main(void)
{
	int num,a[20],i = 0, j = 0;
	printf("enter the number");
	scanf("%d",&num);

	while(num > 0)
	{
		a[i] = num % 2;
		num = num / 2;
		i++;
	}
	for(j = i - 1;j >= 0;j--)
	{
		printf("%d",a[j]);
	}
	printf("\n");
}
