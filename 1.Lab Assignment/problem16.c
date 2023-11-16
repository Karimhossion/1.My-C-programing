//16. Write a C Program to input any Small letter and display it with capital letter.
#include<stdio.h>
int main()
{
    char sm,cap;
     printf("Enter the small letter:");
     scanf("%c",&sm);

    cap=sm-32;

    printf("The capital Letter:%c",cap);
    return 0;
}