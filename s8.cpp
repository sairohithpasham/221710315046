#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,count=0,sum=0;
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	count++;
	for(i=n;i>0;i=i/10)
	{
		sum=sum+pow(i%10,count);
	}
	if(sum==n)
	printf("armstrong number");
	else
	printf("not armstrong");
}
