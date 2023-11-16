//12. Write a C program to input two numbers and print their quotient and remainder.
#include<stdio.h>
int main()
{
int vajjo,vajok,quo,rem;

printf("Enter the 1st number:");
scanf("%d",&vajjo);

printf("Enter the 2nd number:");
scanf("%d",&vajok);

quo=vajjo/vajok;
printf("Quotient:%d\n",quo);

rem=vajjo%vajok;

//printf("Quotient:%d",quo);

printf("remainder:%d\n",rem);
return 0;
}