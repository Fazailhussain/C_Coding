#include<stdio.h>
int first_N_numbers(int n)
{
	if(n>0)
	printf("%d",n);
	first_N_numbers(n-1);
	
}
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	printf("First %d numbers are :",num);
	first_N_numbers(num);
}
