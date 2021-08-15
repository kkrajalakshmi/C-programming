#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("the given year is leap_year",year);
    }
    else
    {
        printf("the given year is non-leap_year",year);
    }
    return 0;
}
