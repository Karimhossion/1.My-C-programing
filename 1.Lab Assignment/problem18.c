//18. Write a C Program to input any Small letter and display it with capital letter. (without using toupper() function).  
#include<stdio.h>
int main()
{

char sm,cap;
printf("Enter the small letter:");
scanf("%c",&sm);

if(sm>='a' && sm<='z')
{
cap=sm-32;
printf("The capital letter:%c\n",cap);
}
else
{
printf("Invalid Value\n");

}
return 0;
}