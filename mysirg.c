//1.wwrite the program to print MySirG N times on the screen.
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the value of n");
	scanf("%d",&n);
	do
	{
		printf("my sirg\n");
		i++;
	}while(i<=n);
	return 0;
}
