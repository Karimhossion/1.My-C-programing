//13. Write a C Program to accept any character from user and display its ASCII number on screen.
#include<stdio.h>
int main() 
{
    char ch;

    printf("Enter the Character:");
    scanf("%c",&ch);

    printf("The ASCII Value:%c = %d",ch,ch);
    
    return 0;
    
}