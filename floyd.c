//28 program to creat floyd triangle

#include <stdio.h>

int main(void)
{
	int i, j, k = 1, num; 
	printf("enter no of rows required:");
	scanf("%d", &num);

	for(i = 1;i <= num;i++)
	{
		for(j = 0;j < i;j++)
		{
			printf("%d\t",k);
			k++;
			
		}
		printf("\n");
	}

}
