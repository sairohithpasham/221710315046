#include<stdio.h>
int main()
{
	int i,j,n,a[10];
	scanf("%d",&n);
	j=0;
	for(i=n;i>0;i=i/10)
	{
		a[j]=i%10;
		j++;
	}
	printf("%d",a[j-1]);
	for(i=j-2;i>0;i--)
	{
		if((a[i-1]%2==0)&&(a[i+1]%2==0))
		{
			printf("%d",a[i]);
		}
	}
	printf("%d",a[i]);
}
