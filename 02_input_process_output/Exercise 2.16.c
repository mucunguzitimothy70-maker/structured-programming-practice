//Exercise 2.16
#include <stdio.h>
int main()
{
    int num1, num2, sum, prod, diff ,quotient, remainder;
    
    printf("ENTER  INTEGER 1\n");
    scanf("%d", &num1); 
    
    printf("ENTER  INTEGER 1\n");
    scanf("%d", &num2); 
    
    
  sum=num1+ num2;
  prod=num1*num2;
  diff=num1-num2;
  quotient=num1/num2;
  remainder=num1%num2;
  
  printf("Sum:%d \n Product:%d \n Difference: %d \n Quotient: %d \n Remainder:%d",sum,  prod,diff,quotient, remainder);
    return 0;
}

