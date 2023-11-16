//19. Write a C program to input the number the days from the user and convert it into years, months and days.
#include<stdio.h>
int main()
{
int year, month,day;
printf("Enter the number days:");
scanf("%d",&day);

year = day/365;
day%=365;
month = day/30;
day%= 30;

printf("Years:%d\n",year);
printf("Month:%d\n",month);
printf("Days:%d\n",day);


return 0;

}