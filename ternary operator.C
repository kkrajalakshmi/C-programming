#include <stdio.h>
//ternary operator                  syntax---->  condition?exp1:exp2
int main()
{
    int a=2,b=0;

    // if(a==2)
    //     b=1000;
    // else
    //     b=404;

    // this if block is replaced by ternary operator

    b = a==2?1000:404;

    printf("%d\n",b);
    return 0;
}
