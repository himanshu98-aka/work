#include <stdio.h>
int main(){
    int num1,num2,sum;
    printf("welcome to sum calculator\n");
    printf("enter number 1 for addition :");
    scanf("%d",&num1); // remember to use & this to input value in variable

    printf("enter number 2 for addition :");
    scanf("%d",&num2);

    sum= num1 + num2 ;
    printf("addition of number 1 + number 2 =%d",sum);

    return 0;   
}
