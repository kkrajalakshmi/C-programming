#include <stdio.h>

int main()
{
    int x=2,y=3,temp;
    printf("x : %d , y : %d\n",x,y);

    temp=x;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x : %d , y : %d\n",x,y);
    return 0;
}
