#include<stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		k=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			k++;
		}
		if(k==1)
		printf("%d\t",i);
    }
}
