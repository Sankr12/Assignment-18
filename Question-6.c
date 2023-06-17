//Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int arr[10],*ptr,i,a;
    printf("Enter the elements of array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Elements of array: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    ptr = arr;
    printf("\n\nReverse of Array: ");
    for(i=9;i>=0;i--)
    {
        a = ptr[i];
        printf("%d ",a);
    }
    printf("\n");
}
