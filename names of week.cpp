#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("Sunday");
		break;
		case 2: printf("Monday");
		break;
		case 3: printf("tuesday");
		break;
		case 4: printf("Wednessday");
		break;
		case 5: printf("Thursday");
		break;
		case 6: printf("friday");
		break;
		case 7: printf("saturday");
		break;
		default: printf("invalid");
		break;
	}
	return 0;
	
}
