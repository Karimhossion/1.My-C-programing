
//17. Write a C Program to input any Capital letter and display it with small letter.(without using tolower() function).
#include<stdio.h>
int main()
{

char cap,sm;
printf("Enter the capital letter:");
scanf("%c",&cap);

if(cap>='A' && cap<='Z')
{
sm=cap+32;
printf("The small letter:%c\n",sm);
}
else
{
printf("Invalid Value\n");

}
return 0;
}