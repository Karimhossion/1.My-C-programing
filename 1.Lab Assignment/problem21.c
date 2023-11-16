//21.Write a C Program to input three digits number from user and display square of first and last numbers.
//(Hint : I/p : 358 O/p : Square of 3 is 9 and Square of 8 is 64).
#include<stdio.h>
int main()
{
int num,first,last, firstsq,lastsq;

printf("Enter three digits number:");
scanf("%d",&num);

last=num%10;
first=num/100;

firstsq=first*first;
lastsq=last*last;


printf("%d %d\n",firstsq,lastsq);

return 0;
}
