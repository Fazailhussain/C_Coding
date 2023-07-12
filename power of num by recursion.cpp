#include<stdio.h>
int power(int n,int p)
{
	int res=1;
	if(p!=0)
	{
		res=n*power(n,p-1);
	}
	return res;
}
int main()
{
	int num,pow;
	printf("Enter the number and power");
	scanf("%d%d",&num,&pow);
	power(num,pow);
	printf("The %d power %d is equal to %d",num,pow,power(num,pow));
}
