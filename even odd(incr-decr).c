#include <stdio.h>
void odd();
void even();
int n=1;
void odd()
{
    if(n<=10)
    {
        printf("odd number :%d\n",n+1);
        n++;
        even();
    }
    return;
}

void even()
{
    if(n<=10)
    {
        printf("even number :%d\n",n-1);
        n++;
        odd();
    }
    return;
}
int main()
{
    odd();
}
