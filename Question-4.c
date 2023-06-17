//Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
#include<strings.h>
int main()
{
    char str[100];
    int i,c=0,b=0;
    char *ptr;
    printf("Enter elements for the strings: ");
    fgets(str,100,stdin);
    ptr = str;
    for(i=0;str[i];i++)
    {
        if(*ptr >= 'A' && *ptr <= 'Z')
        {
            *ptr = *ptr+32;
        }
        if(*ptr >= 'a' && *ptr <= 'z')
        {
            if(*ptr =='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u')
                b++;
            else
                c++;
        }
        ptr++;
    }
    printf("Vowels = %d",b);
    printf("\n");
    printf("Consonants = %d",c);
}
