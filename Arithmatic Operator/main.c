#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Arithmetic operator..........
    int a,b,c,d;
    printf("Enter The value of a: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    a += 2;
    b -= 2;
    c *= 2;
    d /= 2;
    printf("The value is : %d\n %d\n %d\n %d\n",a,b,c,d);
    return 0;
}
