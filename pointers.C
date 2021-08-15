#include <stdio.h>

int main()
{
    int x=72;
    int *z;
    z=&x;
    printf("%d\n",z);       //it stores the address of x
    printf("%d\n",&x);      //address of x
    printf("%d\n",x);
    printf("%d\n",*z);


    return 0;
}
