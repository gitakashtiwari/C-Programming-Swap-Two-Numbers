#include<stdio.h>
int main ()
{
    int a,b,num;
    printf("Enter Two Number for Swapping :");
    scanf("%d %d",&a,&b);
    printf("a = %d, b = %d\n",a,b);
    num =a;
    a=b;
    b= num;
    printf(" Fist Number is a = %d,b = %d\n",a,b);
    return 0; 
}