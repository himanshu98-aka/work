#include <stdio.h>
int main(){
    int num1,num2,sum;
    printf("welcome to sum calculator\n");
    printf("enter numaber 1 for addition :");
    scanf("%d",&num1);

    printf("enter numaber 2 for addition");
    scanf("%d",&num2);

    sum= num1 + num2 ;
    printf("number 1 + number 2 =%d",sum);

    return 0;   
}