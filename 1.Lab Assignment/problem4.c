//4. Write a C program to calculate sum of two integer numbers (given by the user) and print it.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    printf("The sum of:%d",sum);
    return 0;
}