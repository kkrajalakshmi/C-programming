
#include <stdio.h>

struct cars
{
    char name[25];
    int lt;
    int S;
};
int main()
{
    struct cars c1={"bmw",50,399};
    struct cars c2={"audi",44,420};
    struct cars c3={"benz",51,411};
    printf("the car1 details is: %s\t%d\t%d\n",c1.name,c1.lt,c1.S);
    printf("the car2 details is: %s\t%d\t%d\n",c2.name,c2.lt,c2.S);
    printf("the car3 details is: %s\t%d\t%d\n",c3.name,c3.lt,c3.S);
    return 0;
}
