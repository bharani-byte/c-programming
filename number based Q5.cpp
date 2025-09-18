#include<stdio.h>
int main()
{
 int a;
	 printf("Enter the number:");
 scanf("%d",&a);
 if(a>100&a<=999){
 	printf("it is a 3 digit number.\n");
 }
 else{
 	printf("it is not a three digit number.\n");
 }return 0;
}