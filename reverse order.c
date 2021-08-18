
#include <stdio.h>

int main()
{
    int a[9]={34,56,54,32,67,89,90,32,21};
    int i;
    //original order
    printf("The original order\n");
    for(i=0;i<9;i++)
    {

        printf("%d\t",a[i]);
    }
    printf("\n");
    //reverse order
    printf("The reverse order\n");
    for(i=8;i>=0;i--)
    {

        printf("%d\t",a[i]);
    }
    return 0;
}
