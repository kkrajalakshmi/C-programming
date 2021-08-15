#include<stdio.h>

int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);

    if(age>=18 && age<=100)
    {
        printf("you are eligible to vote",age);
    }
    else if(age<18 && age>=0)
    {
        printf("not eligible",age);
    }
    else
    {
        printf("unfit",age);
    }
    return 0;
}
