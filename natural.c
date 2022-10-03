//2.write the program to print the first N natural number.
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter your n times");
	scanf("%d",&n);
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=n);
	return 0;
}
