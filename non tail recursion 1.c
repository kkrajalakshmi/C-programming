
#include <stdio.h>
int non_tail(int n)
{
    if(n==1)
        return 0;
    else
        return 1+non_tail(n/2);
}
int main()
{
    printf("This is Non Tail Recursion \n");
    printf("%d",non_tail(220));

    return 0;
}
