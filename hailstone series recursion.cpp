#include<stdio.h>
int hailstone(int n)
{
	int next=0;
	if(n!=1)
	{
	if(n%2==0)
	{
		next=n/2;
	}
	else 
	{
		next=3*n+1;
	}
	printf(" %d",next);
	hailstone(next);
	
}
return(1);
}
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	hailstone(num);
}
