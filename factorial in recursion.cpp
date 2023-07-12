#include<stdio.h>
int fact(int n)
{
	int factorial=1;
	if(n>=1)
	{
	factorial=fact(n-1)*n;
	}
	return factorial;
}
int main()
{
	int res;
	int num;
	printf("Enter a number to find its factorial");
	scanf("%d",&num);
	res=fact(num);
	printf("The factorial of %d is %d",num,res);
}
