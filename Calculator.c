#include <stdio.h>
int main()
{
    int num1,num2,result=0,ch;   
    printf("Press\n1.for Sum\n2.for Mul\n3.for Div\n4.for Sub\n");
    scanf(" %d",&ch);
    switch(ch)    
    {
        case 1:
        	 printf("Enter first number: ");
             scanf("%d",&num1);
             printf("Enter second number: ");
             scanf("%d",&num2);
             result=num1+num2;
              printf("The Sum is: %d",result);
            break;
             
        case 2:
        	 printf("Enter first number: ");
              scanf("%d",&num1);
             printf("Enter second number: ");
             scanf("%d",&num2);
             result=num1*num2;
              printf("The Sum is: %d",result);
            break;
         
        case 3:
        	 printf("Enter first number: ");
              scanf("%d",&num1);
             printf("Enter second number: ");
             scanf("%d",&num2);
             result=num1/num2;
              printf("The Sum is: %d",result);
            break;
             
        case 4:
        	 printf("Enter first number: ");
              scanf("%d",&num1);
              printf("Enter second number: ");
              scanf("%d",&num2);
             result=num1-num2;
              printf("The Sum is: %d",result);
            break;
        default:
            printf("Invalid operation.\n");
    }
    return 0;
}
