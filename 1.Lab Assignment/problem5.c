//5. Write a C program that will take three numbers from user and find their average.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    int avg=(a+b+c)/3;
    printf("The average:%d\n",avg);
    return 0;
}