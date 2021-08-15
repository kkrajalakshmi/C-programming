#include <stdio.h>
int swap(int *u,int *v)
{
   int temp;
   temp=*u;
   *u=*v;
   *v=temp;
   printf("*u=%d\t*v=%d\n",*u,*v);
   return *v;
}
int main()
{
    int c;
    int d;

    printf("enter the value of c:\n");

    scanf("c=%d",&c);
    printf("enter the value of d:");
    scanf("d=%d",&d);
    swap(&c,&d);
    printf("the value of c is:%d\tthe value of d is:%d",&c,&d);
    return 0;
}
