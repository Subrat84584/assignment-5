//6.write the program to print the first N natural even number.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int i=2;
	do
	{
		printf("%d\n",i);
		i+=2;
	}while(i<=n*2);
	return 0;
}
