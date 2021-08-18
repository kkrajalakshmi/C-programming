
#include <stdio.h>
void func(int n)
{
    if(n==0)
        return;
    else

        printf("%d\n",n);
        return func(n-1);
}
int main()
{
    printf("This is Tail Recursion \n");
    func(5);
    return 0;
}
