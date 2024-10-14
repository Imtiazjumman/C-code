#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
//Absolute value (ABS) ........

    int result = abs(-25);
    printf("%d",result);

*/


/*
// Square Root (sqrt) always return double type data......

    int a;
    printf("Take input of a: ");
    scanf("%d",&a);

    double result = sqrt(a);
    printf("The Result is: %.2lf",result);
*/

/*
//x raised to the power y (x^y)

    int x,y;
    double result;
    printf("Enter the value of X:");
    scanf("%d",&x);

    printf("Enter the value of Y:");
    scanf("%d",&y);

    result = pow(x,y);

    printf("The result is : %.2lf\n",result);
*/

/*
//log, log10,exp, sin,cos,tan,cot,sec,cosec function

    double x,result;
    printf("Take the value of x : ");
    scanf("%lf",&x);

    result = log(x);
    printf("log(%.2lf) = %lf\n",x,result);

     result = log10(x);
     printf("log10(%.2lf) = %lf\n",x,result);

     result = exp(x);
     printf("exp(%.2lf) = %lf\n",x,result);

     result = sin(x);
     printf("sin(%.2lf) = %lf\n",x,result); //cos,tan,cot,sec,cosec
*/


// round, trunc, ceil, floor function

    double x,result;
    printf("Take the value of x : ");
    scanf("%lf",&x);

    result = round(x);  // round means nearest integer number.
    printf("round(%.lf) = %lf\n",x,result);

    result = trunc(x);  // truncaid means it removes number after doshomik.
    printf("trunc(%lf) = %lf\n",x,result);

    result = ceil(x);  // Ceil means upper number.
    printf("ceil(%.lf) = %lf\n",x,result);

    result = floor(x);  // floor means lower number.
    printf("floor(%.lf) = %lf\n",x,result);

    return 0;
}
