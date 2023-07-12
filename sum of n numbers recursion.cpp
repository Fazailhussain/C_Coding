#include<stdio.h>
int sum(int n)
{
	int res=0;
	if(n>=1)
	{
		res=n+sum(n-1);
	}
	return res;
}
int main()
{
	int num,result;
	printf("Enter the number to which you want to find sum");
	scanf("%d",&num);
	result=sum(num);
	printf("%d",result);
}
