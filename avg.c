// 12 program to calculate average of numbers

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, addition = 0, avg,i, *marks;
	
	printf("enter how many subject's marks to be entered:");
	scanf("%d",&num);

	marks = malloc(sizeof(int) * num);
	
	printf("enter marks of each subject");
	for(i = 0;i < num;i++)
	{
		scanf("%d",&marks[i]);
		addition = addition + marks[i];
	}
	
	avg = addition / num;
	printf("average is %d\n", avg);
} 
