// 18 program to swap two numbers

#include <stdio.h>

int main(void)
{
	int a, b, temp = 0;

	printf("enter two numbers:");
	scanf("%d%d", &a, &b);
	
	printf("a is %d\n", a);
	printf("b is %d\n", b);
  
	temp = a;
	a = b;
	b = temp;
	
	printf("after swapping a is %d and b is %d\n", a, b);

} 
