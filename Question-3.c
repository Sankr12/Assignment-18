//Write a function to sort an array of int type values. [void sort(int *ptr,int size);]
#include<stdio.h>
void sort(int *ptr,int size);
int main()
{
    int i,arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    //Before sorting
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Elements before sorting: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("After soring: ");
    sort(arr,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void sort(int *ptr,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
        if( ptr[j] > ptr[j+1] )
        {
            temp = ptr[j];
            ptr[j] = ptr[j+1];
            ptr[j+1] = temp;
        }
        }
    }
}
