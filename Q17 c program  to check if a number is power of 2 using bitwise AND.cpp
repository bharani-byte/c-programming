#include<stdio.h>
int main()
{
	int a=4,b=5;
    printf("%d\t",a&b);
    printf("%d\t",a|b);
    printf("%d\t",a^b);
    printf("%d\t",~a);
    printf("%d\t",a<<2);
    printf("%d\t",a>>2);
	return 0;
}