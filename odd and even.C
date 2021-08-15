//odd

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);

    if(num%2==1)
    {
        printf("the given number is odd",num);
    }
    else
    {
        printf("the given number is even",num);
    }
    return 0;
}


//even

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("the given number is even",num);
    }
    else
    {
        printf("the given number is odd",num);
    }
    return 0;
}
