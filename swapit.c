#include<stdio.h>
int main()
{
int a=40, b=30;
printf("Before swap a=%d b=%d",a,b);
a=a+b;//a=70 (40+30)
b=a-b;//b=40 (70-30)
a=a-b;//a=30 (70-40)
printf("\n After swap a=%d b=%d",a,b);
return 0;
}
