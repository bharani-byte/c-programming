#include<stdio.h>
int main()
{
	float a,b,c,avg;
	printf("enter three numbers:");
	scanf("%f%2f%f&a,b,c");
	avg=(a+b+c)/3;
	printf("avg of %.2f,%2f and %2f is %,2f\n",a,b,c,avg);
	return 0;
}