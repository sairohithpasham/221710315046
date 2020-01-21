#include<stdio.h>
int main()
{
	int n,i,a,count=0,k;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(palin(a))
		count++;
		if(count==k)
		{
			printf("%d",a);
		}
	}
	
	
	
}
int palin(int a)
{
	int i,rev=0;
	for(i=a;i>0;i=i/10)
	{
	rev=rev*10+i%10;
    }
    if(rev==a)
    return 1;
    else
    return 0;
}
