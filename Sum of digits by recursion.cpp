#include<stdio.h>
int sum(int n)
{
	int res=0;
	if(n!=0)
	{
		res=sum(n/10)+(n%10);
	}
	return res;
}
int main()
{
	int num,result;
	printf("Enter the number");
	scanf("%d",&num);
	result=sum(num);
	printf("The sum of all digits in %d is %d",num,result);
}
