//10.write a program to print a table of N.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d ",n*i);
	}
	return 0;
}
