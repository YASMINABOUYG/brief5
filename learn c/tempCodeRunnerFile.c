#include <stdio.h>
int main()
{
float Num1,Num2,result;
char op;

printf("Enter the First Number\n");
scanf("%f",&Num1);

printf("Enter the Operator\n");
scanf("%s",&op);

printf("Enter the Second Number\n");
scanf("%f",&Num2);

switch (op)
{
case '-':
    result=Num1-Num2;
    printf("%f",result);
    printf("%f",result/Num1);
    printf("%f",result*Num1);
    printf("%f",result+Num1);
    printf("%f",result/(Num1+Num2));
    printf("%f",result*(Num1+Num2));
    printf("%f",result+(Num1+Num2));
    printf("%f",result/(Num1*Num2));
    printf("%f",result*(Num1*Num2));
    printf("%f",result+(Num1*Num2));
    printf("%f",result/(Num1/Num2));
    printf("%f",result*(Num1/Num2));
    printf("%f",result+(Num1/Num2));
    printf("%f",result/(Num1-Num2));
    printf("%f",result*(Num1-Num2));
    printf("%f",result+(Num1-Num2));
    break;


case '+':
    result=Num1+Num2;
    printf("%f \n",result);
    printf("%f",result/Num1);
    printf("%f",result*Num1);
    printf("%f",result-Num1);
    printf("%f",result/(Num1+Num2));
    printf("%f",result*(Num1+Num2));
    printf("%f",result-(Num1+Num2));
    printf("%f",result/(Num1*Num2));
    printf("%f",result*(Num1*Num2));
    printf("%f",result-(Num1*Num2));
    printf("%f",result/(Num1/Num2));
    printf("%f",result*(Num1/Num2));
    printf("%f",result-(Num1/Num2));
    printf("%f",result/(Num1-Num2));
    printf("%f",result*(Num1-Num2));
    printf("%f",result-(Num1-Num2));
    break;

 
case '/':
    if (Num2!=0);
    else  printf("impossible de diviser sur 0\n");
    
    result=Num1/Num2;
    printf("%f",result);
    printf("%f",result+Num1);
    printf("%f",result*Num1);
    printf("%f",result-Num1);
    printf("%f",result+(Num1+Num2));
    printf("%f",result*(Num1+Num2));
    printf("%f",result-(Num1+Num2));
    printf("%f",result+(Num1*Num2));
    printf("%f",result*(Num1*Num2));
    printf("%f",result-(Num1*Num2));
    printf("%f",result+(Num1/Num2));
    printf("%f",result*(Num1/Num2));
    printf("%f",result-(Num1/Num2));
    printf("%f",result+(Num1-Num2));
    printf("%f",result*(Num1-Num2));
    printf("%f",result-(Num1-Num2));
    break;




case '*':
    result=Num1*Num2;
    printf("%f",result);
    printf("%f",result/Num1);
    printf("%f",result+Num1);
    printf("%f",result-Num1);
    printf("%f",result/(Num1+Num2));
    printf("%f",result+(Num1+Num2));
    printf("%f",result-(Num1+Num2));
    printf("%f",result/(Num1*Num2));
    printf("%f",result+(Num1*Num2));
    printf("%f",result-(Num1*Num2));
    printf("%f",result/(Num1/Num2));
    printf("%f",result+(Num1/Num2));
    printf("%f",result-(Num1/Num2));
    printf("%f",result/(Num1-Num2));
    printf("%f",result+(Num1-Num2));
    printf("%f",result-(Num1-Num2));
    break;





default:printf("the operator is not valid");
    break;
}
return 0;
}