////2.write the program to print the first N natural number in reverse order.
#include<stdio.h>
int main()
{
	int n;
	printf("enter your n times");
	scanf("%d",&n);
	do
	{
		printf("%d\n",n);
		n--;
	}while(n>0);
	return 0;
}
