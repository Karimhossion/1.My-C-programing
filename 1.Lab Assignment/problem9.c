//10. Write a C Program to interchange values of two numbers using third variable.
 #include<stdio.h>
 int main(){
    int num1, num2, temp;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    //Interchange values using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Output the interchanged values
    printf("First interchange number: %d\n", num1);
    printf("Second interchange number: %d\n", num2);

    return 0;
}