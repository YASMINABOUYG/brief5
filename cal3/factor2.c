#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int factorial(int);
int main()
{
    int num,fact=1;
    printf("Enter the number to find factorial: ");
    scanf("%d",&num);//get input from user
    printf("Factorial of %d is: %d",num,factorial(num));
           //call the factorial function to display
 getch();
    return 0;
}
int factorial(int num){  //create function to find factorial
int i,fact=1;  //declare variables
for(i=1; i<=num; i++)
fact=fact*i;//calculate factorial
return(fact); //return fact to main
}