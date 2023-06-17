//Write a function to swap values of two variables of calling functions (TSRS)
#include<stdio.h>
int swapping(int *P,int *q);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    swapping(&a,&b);
    printf("a = %d and b = %d",a,b);
    return 0;
}
int swapping(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    return 0;
}
