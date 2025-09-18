#include<stdio.h>
int main()
{
 int a,b,c;
  	printf("enter a value ");
 scanf("%d",&a);
  	printf("enter b value ");
 scanf("%d",&b);
 	 printf("enter c value ");
 scanf("%d",&c);
 if(a>b && a>c){
   printf("The greatest number is a:%d",a);
}
else if(b>a && b>c){
  printf("The greatest number is b:%d",b);
}else{
  printf("The greatest number is c:%d",c);
}
 return 0;
}