//14. Write a C Program to input any ASCII number and display appropriate character on screen.
#include<stdio.h>
int main()
{
    int ch;

    printf("Enter the assii:");
    scanf("%d",&ch);

    printf("The charecter:%c",ch,(char)ch);

    return 0;
}
