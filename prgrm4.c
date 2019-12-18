// write a program to display the format dd/mm/yy.
#include<stdio.h>
int main()
{
	int dd,mm,yy;
	printf("enter the date");
	scanf("%d-%d-%d",&dd,&mm,&yy);
	printf("given date is %d-%d-%d",dd,mm,yy);	
	return 0;
}
