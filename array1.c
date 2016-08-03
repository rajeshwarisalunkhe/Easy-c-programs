// 19 program to print all the elements of the array


#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, i, *number; 
	printf("enter how many number need to store in array:");
	scanf("%d",&n);

	number = malloc(n * sizeof(int));

	printf("enter number one by one:");
	for(i = 0;i < n;i++)
	{
		scanf("%d", &number[i]);

	}
	
	printf("numbers in array:");
	for(i = 0;i < n;i++)
	{
		printf("%d\t", number[i]);

	}
	printf("\n");


}
