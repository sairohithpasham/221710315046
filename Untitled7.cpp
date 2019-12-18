#include<stdio.h>
int main()
{
	int n,res;
	printf("enter the number");
	scanf("%d",&n);
	if(n%2==0)
	{
		res=n*n;
		printf("%d",res);
	}
	else
	{
		res=n*n*n;
		printf("%d",res);
	}
}
