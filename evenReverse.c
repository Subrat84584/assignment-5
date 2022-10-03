//7.write the program to print the first N even natural number in reverse.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	do
	{
		printf("%d ",n*2);
		n--;
	}while(n>0);
	return 0;
}
