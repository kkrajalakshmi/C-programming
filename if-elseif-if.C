#include <stdio.h>

int main()
{
    int a=2,b=4,c=6;

    if(a>b && a>c){
    printf("%d is greater",a);
    }

    else if(b>c){
        printf("%d is greater",b);
    }

    else{
        printf("%d is  greater",c);
    }
    return 0;
}
