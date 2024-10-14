#include <stdio.h>
#include <stdlib.h>

int main()
{
// 1+2+3+ ...... +N........
// 1+3+5+ ...... +N......

/*
    int n,i,sum = 0;

    printf("Enter the last number : ");
    scanf("%d",&n);
    printf("1 + 3 + 5 + ...... + %d",n);


    for(i = 1; i <= n; i= i+2) //i + 1
    {
        sum = sum + i;
    }

    printf(" = %d", sum);
*/

/*
    int n, i=1 , sum = 0;
    printf("Enter the last numbre: ");
    scanf("%d",&n);
    //printf("1 + 2 + 3 + ... + %d",n);
    printf("1 + 3 + 5 + ... + %d",n);

    while(i <= n)
    {
        sum = sum  + i;
        //i = i + 1;
        i = i + 2;
    }
    printf(" = %d\n",sum);
*/

/*
// 1*2 + 2*3 + 3*4 + ....... + n*n ..........

    int a = 1, b = 2, n1 , n2 , sum = 0;

    printf("Enter n1 & n2 : ");
    scanf("%d %d",&n1,&n2);
    printf("1.2 + 2.3 + 3.4 + ....... + %d.%d",n1,n2);

    while(a <= n1 && b <= n2)
    {
        sum = sum + a*b;
        a = a + 1;
        b = b + 1;
    }

    printf("= %d",sum);
*/


/*
// 1*3 + 3*5 + 5*7 + ....... + n*n ..........

 int a = 1, b = 3, n1 , n2 , sum = 0;

    printf("Enter n1 & n2 : ");
    scanf("%d %d",&n1,&n2);
    printf("1.3 + 3.5 + 5.7 + ....... + %d.%d",n1,n2);

    while(a <= n1 && b <= n2)
    {
        sum = sum + a*b;
        a = a + 2;
        b = b + 2;
    }

    printf("= %d",sum);
*/

/*
// 1*3*5 + 2*5*7 + 3*7*9 + ....... + n1*n2*n3


    int a = 1, b = 3, c = 4 , n1, n2, n3, sum = 0 ;
    printf("Enter the value of n1, n2, n3 : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("1.3.4 + 2.5.6 + 3.7.8 + ...... + %d.%d.%d",n1,n2,n3);

    while(a <= n1 && b <= n2 && c <= n3)
    {
        sum = sum + a*b*c;
        a = a + 1;
        b = b + 2;
        c = c + 3;
    }
    printf(" = %d",sum);
*/

/*
// Series | 1^2 + 2^2 + 3^2 +....+ n^2

    int n,i = 1,sum = 0;
    printf("Enter Any number : ");
    scanf("%d",&n);
    printf("1^2 + 2^2 + %d^2 ",n);

    while(i <= n)
    {
        sum = sum + i*i;
        i++;
    }
    printf("= %d",sum);
*/

/*
// Series | 1 + 1/2 + 1/3 +.... + 1/ n

    double n, i, sum = 0;
    printf("Enter any Number : ");
    scanf("%lf",&n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (1/i);

        if (i == 1)
        {
            printf("\n1 + ");
        }
        else if (i == n)
        {
           printf("(1/%.2lf)",i);
        }
        else
            {
                printf("(1/%.2lf) + ",i);
            }
    }
    printf("= %.2lf\n",sum);
*/

/*
//Series | 1^2 X 2^2 X 3^2 X.... X n^2

    int i, n , result = 1;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("1^2 X 2^2 X 3^2 X.... X %d^2 ",n);

    for(i = 1; i <= n; i++)
    {
        result = result * i*i;
    }
    printf("= %d",result);
*/

//Series | 1-2+3-4+5-6……
// sum = (1+3+5+......) - (2+4+6+.....)

    int n,i,even = 0,odd = 0;
    printf("Enter the last Number : ");
    scanf("%d",&n);

    for(i=1 ; i <= n ; i++)
    {
        if(i%2 == 0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }

    }

    printf("Result is = %d\n",odd - even);

    getch();
}
