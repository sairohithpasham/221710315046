#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the angles of the triangle");
	scanf("%d %d %d",&x,&y,&z);
	if(x+y+z==180)
	printf("the triangle is possible with the given angles");
	else
	printf("the triangle isnt possibole");
}
