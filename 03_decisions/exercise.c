//Exercise 2.22
#include <stdio.h>
int main()
{
    int integer;
    printf("ENTER AN INTEGER\n");
    scanf("%d", &integer); 
    
    if (integer % 2 == 0){
        printf("even\n");
    }
    else{
        printf("odd \n");
    }
    
    return 0;
}

