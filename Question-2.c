//Write a function to swap string of two char arrays of calling functions (TRRS)
#include<stdio.h>
#include<strings.h>
int swapping(char *,char *);
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the elements of first string: ");
    fgets(str1,100,stdin);
    printf("Enter the elements of second string: ");
    fgets(str2,100,stdin);

    //Before swapping of strings
    printf("\nBefore Swapping\n");
    printf("String1: %s",str1);
    printf("String2: %s",str2);
    printf("\n");
    //Now we are going for swapping.
    printf("After swapping\n");
    swapping(str1,str2);
    printf("String1: %s",str1);
    printf("String2: %s",str2);
    return 0;
}
int swapping(char *str1, char *str2)
{
    char temp[100];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    return 0;
}
