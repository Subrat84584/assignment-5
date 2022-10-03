//4.write the program to print the first N odd natural number.
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the value of n");
	scanf("%d",&n);
	do
	{
		printf("%d\n",i);
		i+=2;
	}while(i<=n*2);
	return 0;
}
