#include <stdio.h>

int main()
{
    char name[30];

    printf( "enter your name:");
    scanf("%s",&name);
    printf("hello %s\n",name);

    int age;
    printf("enter your age:");
    scanf("%d",& age);
    printf("your age is %d",age);
    return 0;

}