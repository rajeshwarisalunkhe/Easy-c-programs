// 32 Write a c program to find out L.C.M. of two numbers.

#include <stdio.h>

int main(void)
{

	int i, j, first, second, lcm, array1[100], array2[100];

	printf("enter two numbers of which lcm has to be calculated:");

	scanf("%d %d", &first, &second);

	for(i = 1;i <= 100;i++)
	{
		array1[i] = first * i;  

		for(j = 1;j <= 100;j++)
		{
			array2[j] = second * j;
			
			if(array1[i] == array2[j])
			{
				printf("lcm is %d\n", array2[j]);
				return 0;
			} 
		}
		
	}

}
