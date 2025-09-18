#include<stdio.h>
int main()
{
	int a,b,diff;
		printf("enter a first number:");
		scanf("%d",&a);
		printf("enter a second number:");
		scanf("%d",&b);
		diff=a-b;
		if(diff%2==0)
		{
			printf("the difference %d is an even.\n",diff);
	    }
		else
		{
			printf("the difference %d is an odd.\n",diff);
		}
		
	return 0;
}