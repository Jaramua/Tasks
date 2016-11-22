#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a;
    if (a > 99999 || a < 10000)
    {
        return 1;
    }
    scanf("%i", &a);
    printf("1 is %i\n", a/10000);
    printf("2 is %i\n", a/1000%10);
    printf("3 is %i\n",a/100%10);
    printf("4 is %i\n",a/10%10);
    printf("5 is %i\n",a/1%10);
    return 0;
}
