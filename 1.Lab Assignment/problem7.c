//8. Write a C Program from convert Km value into meter value.
#include<stdio.h>
int main()
{
double km,me;
printf("Enter the kilometer:");
scanf("%lf",&km);

 me=km*1000;
printf("Meter:%.lf",me);

return 0;
}