//20.Write a C Program to input three digits number from user and calculate sum of first and last numbers. (Hint : I/p : 358 O/p :11).
#include<stdio.h>
int main()
{
int num, first,last,sum;
printf("Enter three digits number:");
scanf("%d",&num);

last=num%10;
first=num/100;
sum=first+last;

printf("first and last number sum:%d",sum);
return 0;
}