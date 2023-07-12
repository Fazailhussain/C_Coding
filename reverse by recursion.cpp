#include<stdio.h>
int reverse(int n)
{
	int rev=0;
	if(n!=0)
	{
		rev=n%10+reverse(n/10);
	}
	return rev;
}
int main()
{
	int num,result;
	printf("Enter the number");
	scanf("%d",&num);
	result=reverse(num);
	printf(" %d",result);
}
