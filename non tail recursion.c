
#include <stdio.h>
void non_tail_recursion(int n)
{
    if(n==0)
        return;

    else
    non_tail_recursion(n-1);
    printf("%d\n",n);
}
int main()
{
    printf("This is Non-Tail Recursion \n");
    non_tail_recursion(10);
    return 0;
}
