//9. Write a C Program to convert Celsius value into Fahrenheit value.
#include<stdio.h>
int main()
{
int cel,fer;
printf("Enter the celsius:");
scanf("%d",&cel);
fer=(9*cel)/5+32;
printf("The Fahrenheit Value:%d°",fer);
return 0;
}