#include<stdio.h>
int main()
{
	int n,r[20],a[20],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n-1;i++)
	{
		r[i]=a[i-1]*a[i+1];
	}
	r[0]=a[0];
	r[n-1]=a[n-1];
	for(i=0;i<n;i++)
	{
		printf("%d\n",r[i]);
	}
}
