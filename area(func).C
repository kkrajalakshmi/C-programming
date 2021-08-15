#include <stdio.h>
int areaofRect(int,int);
int areaofRect(int length,int breadth)
{
    int area;
     length=23;
     breadth=45;
    area=length*breadth;
    return area;

}
int main()
{
    int l;
    int b;
    int area;
    area=areaofRect(l,b);
    printf("The area is : %d",area);

    return 0;
}
