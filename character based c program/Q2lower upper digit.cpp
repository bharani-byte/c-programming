#include<stdio.h>
int main()
{
	char a[10];
	printf("Enter any character:");
	scanf("%d",&a);
	int b,c;
	b=toupper(a);
	c=tolower(a);
	if(a==toupper(a))
	{
		printf("it is upper case");
	
	}else
printf("it is a lower case");
}	