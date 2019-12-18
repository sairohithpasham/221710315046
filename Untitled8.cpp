#include<stdio.h>
int main()
{
	char a;
	printf("enter the character");
	scanf("%c",&a);
	if(a>=65&&a<=90)
	printf("the character is capital letter");
	else if(a>=97&&a<=122)
	printf("the character is small letter");
	else if(a>=48&&a<=57)
	printf("the character is a digit");
	else
	printf("the character is neither alphabet or digit");
}
