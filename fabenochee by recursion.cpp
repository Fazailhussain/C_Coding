#include<stdio.h>
int fabenochee(int n1,int n2)
{
	int next=0;
	next=n1+n2;
	n1=n2;
	n2=next;
	fabenochee(n1,n2);
	return printf("%d",);
}
int main()
{
	int first,second;
	printf("Enter the first and second number");
	scanf("%d%d",&first,&second);
	fabenochee(first,second);
}
