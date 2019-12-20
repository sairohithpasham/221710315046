#include<stdio.h>
int main()
{
	int a[20],count=0,i,n;
	printf("enter the number");
	scanf("%d",n);
	for(i=n;i>0;i=i/10)
	count++;
	for(i=0;i<count;i++)
	scanf("%d",&a[i]);
	for(i=0;i<count;i++)
	{
	switch(a[i])
	{
		case 1:printf(" one ");
		break;
		case 2:printf(" two ");
		break;
		case 3:printf(" three ");
		break;
		case 4:printf(" four ");
		break;
		case 5:printf(" five ");
		break;
		case 6:printf(" six ");
		break;
		case 7:printf(" seven ");
		break;
		case 8:printf(" eight ");
		break;
		case 9:printf(" nine ");
		break;
		case 0:printf(" zero ");
		break;
		default: printf("invalid");
		break;
	}
}
}
