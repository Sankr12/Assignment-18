//Write a program to compute sum of all elements in an array using pointers
#include<stdio.h>
int main()
{
    int arr[10],i, a=0;
    int *ptr;
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
    printf("\n");
    ptr = arr;
    printf("\n");

    for(i=0;i<10;i++)
    {
        a = a + *ptr;
        ptr++;
    }
    printf("Sum of the elements = %d",a);
    printf("\n");
}
