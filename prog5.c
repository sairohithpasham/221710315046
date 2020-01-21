#include<stdio.h>
int main()
{
int a[10],n,i,j;
scanf("%d",&n);
j=0;
for(i=n;i>0;i=i/10)
{
   a[j]=i%10;
   j++;
}
for(i=j-1;i>=0;i--)
{
	printf("%d ",a[i]);
}
}
