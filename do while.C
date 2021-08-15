#include <stdio.h>
int main()
{
    char alphabets='a';
    do{
        printf("%c\n",alphabets);
        alphabets++;
    }
    while(alphabets<='z');

    return 0;
}

