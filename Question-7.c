//Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<strings.h>
int main()
{
    char str[100],*ptr,a;
    int i;
    printf("Enter the elements of string: ");
    fgets(str,100,stdin);
    printf("\n");
    printf("Elements of string: ");
    for(i=0;str[i];i++)
    {
        printf("%c",str[i]);
    }
    ptr = str + strlen(str) - 2;
    printf("\n");
    printf("\nReverse of strings: ");
    for(i=strlen(str)-2;i>=0;i--)
    {
        printf("%c",*ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}
