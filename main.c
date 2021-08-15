#include <stdio.h>

int main()
{
    int a;
    int b;
    int add;

    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    //add=a+b;
    printf("%d is the sum \n %d difference \n %d product \n %d quotent \n  %d remainder \n ",a+b,a-b,a*b,a/b,a%b);

    return 0;
}
