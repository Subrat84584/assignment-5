//9.write the program to print the cubes of the first N natural numbers.
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i*i);
	}
	return 0;
}
