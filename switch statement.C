
#include <stdio.h>

int main()
{
    int i=3;
    switch(i)
    {
        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;

        default:
            printf("This number does not exist!...");
    }
        return 0;
}
