#include<stdio.h>
int main()
{
	int a=10000,b=2000,c=1000,d;
	char s;
	float k;
	d=(a>b&&a>c)?a:b>c?b:c;
	printf("%d",d);
	printf("\nsize of a=%d",sizeof(a));
	printf("\nsize of s=%d",sizeof(s));
	printf("\nsize of float=%d",sizeof(float));
	return 0;
}
