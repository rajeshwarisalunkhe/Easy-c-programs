// 23 program to find wheather the number is palindrome or not

#include <stdio.h>

int main(void)
{
	int num, mod, i = 0,number[10],j = 0, k =  1, revnumber = 0, original = 0;
	
	printf("enter the number:");
	scanf("%d",&num);
	original = num;

	// reversing number
	while(num / 10 != 0)
	{
		mod = num % 10;
		num = num / 10;
		number[i] = mod;
		k = k * 10;
		i++;
		
	}
	number[i] = num;
	for (j = 0;j <= i ;j++)
	{
		revnumber = revnumber + number[j] * k;
		k = k / 10;
	}

	if (original == revnumber)
	{
		printf("palindrome");	
	}
	else
	{
		printf("not a palindrome");
	}
	printf("\n");
	
}

