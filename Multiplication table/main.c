#include <stdio.h>
#include <stdlib.h>

int main()
{
    //5.99 : Multiplication Table..

    //first take any number
    //then how many times loop will go..

    while(1) // code run for unlimited...
    {
        int num,i;

        printf("Enter any number: ");
        scanf("%d",&num);
        printf("Multiplication Of : %d\n",num);

        for( i=1 ; i<=10 ; i++)
        {

            printf("%d X %d = %d\n",num,i,num*i);

        }
    }

    return 0;
}
