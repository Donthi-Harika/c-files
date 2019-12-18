#include<stdio.h>   //escape sequences
int main()
{
	char name[20];
	char sname[20];
	printf("enter your name");
	scanf("%s",&name);++
	printf("enter yoyr surname");
	scanf("%s",sname);
	printf("your name is %s\n",name);
	printf("your surname is %s\n",sname);
	
	printf("your name is %s\t",name);
	printf("your surname is %s\n",sname);
	
	printf("your name is %s\b",name);
	printf("your surname is %s\n",sname);
	
	printf("your name is %s\r",name);
	printf("your surname is %s\n",sname);
	
	}
	
