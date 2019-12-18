#include<stdio.h>
#define begin main
int begin()
{
	int num1,num2;
	printf("enter the values");
	scanf("%d%d",&num1,&num2);
	printf("Differnce=%d",num1+~num2+1);
}
