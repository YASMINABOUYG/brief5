#include<stdio.h>
#include<stdlib.h>  
int main()  
{
    float num1,num2,result;
    char op;

    printf("Enter the First number\n");
    scanf("%f", &num1);




    printf("Enter the operator\n");
    scanf("%s", &op);
 if (op=='q')
 {
 exit (0);
 }
 else
    printf("Enter the Second number\n");
    scanf("%f", &num2);


    switch (op)
    {
    case '-':
        result = num1-num2;
        printf("%f",result);
        break;
    

    case '+':
        result = num1+num2;
        printf("%f",result);
        break;


    case '/':
    if (num2!=0);
    else  printf("impossible de diviser sur 0\n");
    
        result = num1/num2;
        printf("%f",result);
        break;


    case '*':
        result = num1*num2;
        printf("%f",result);
        break;


    default:
    printf("the operator is not valid");
        break;
    }
    return 0;
}