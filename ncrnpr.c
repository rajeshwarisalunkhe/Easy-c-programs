// 27 program to calculate ncr and npr

#include <stdio.h>
int fact(int n);
int ncr (int n, int r);
int npr (int n, int r);


int main(void)
{
	int num,r; 	
	printf("please enter value of n and r:");
	scanf("%d%d", &num, &r);
	printf("ncr is %d\n", ncr(num, r));
	printf("npr is %d\n", npr(num, r));

} 

int fact(int n)
{
	long long num = 1;
	int i;
	
	for(i = n ;i > 0;i--)
	{
		num = num * i;
	}
	return num;
}

int ncr (int n, int r)
{
	int ncr;
	ncr = (fact(n)) / (fact(r) * fact(n - r));
	return ncr;
}

int npr (int n, int r)
{
	int npr;
	npr = (fact(n) / fact(n - r));
	return npr;
}

