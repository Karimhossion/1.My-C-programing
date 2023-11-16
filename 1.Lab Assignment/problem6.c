//7. Write a C program that will take three integer as input from user and print their average. 
//(You should use type-cast to get proper result).
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three number:");
    scanf("%f%f%f",&a,&b,&c);
    float avg=(a+b+c)/3;
    printf("The average:%f\n",avg);
    return 0;
}
