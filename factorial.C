/*
#include <stdio.h>
int fact(int);
int main()
{
     int n=6;
     int result= fact(n);
     printf("The factorial is %d",result);
    return 0;
}
    int fact(int n)
{
    int i;
    int f=1;

    for(i=1;i<=6;i++)
    {
        f=f*i;
    }
    return f;
}

*/

#include <stdio.h>
int fact(int);
int main()
{
     int n=6;
     int result= fact(n);
     printf("%d",result);

    return 0;
}
    int fact(int n)
{
    int i;
    if(n!=1)
        return n*fact(n-1);
    return 1;
}
