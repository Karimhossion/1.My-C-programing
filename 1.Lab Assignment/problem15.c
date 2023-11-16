//15. Write a C Program to input any Capital letter and display it with small letter.
#include<stdio.h>
int main()
{
    char cap,sm;
     printf("Enter the capital letter:");
     scanf("%c",&cap);

    sm=cap+32;

    printf("The small Letter:%c",sm);
    return 0;
}