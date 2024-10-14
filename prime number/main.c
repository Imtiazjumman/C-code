#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

// Check Prime Number...
//if num is divided by 2 then its not prime num..
//if num is not divided by 2 then its a prime number..
// 0,1 is not a prime number..
/*
 while(1)
    {


    int num1, i, count=0;  //count 0 means false means is it execute or no.

    printf("Enter Any Number: ");
    scanf("%d",&num1);

    if(num1 <= 1)
        {
            count=1;  // count 1 means true..
        }

        // for(i = 2; i <= num1/2; i++)  // to compress the iteration.......
        for(i = 2; i <= sqrt(num1); i++) // to compress more this iteration...
        {
            if(num1%2==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d number is a prime number. \n",num1);
        }

        else
        {
            printf("%d number is not a prime number. \n",num1);
        }
    }
*/

/*
//Print Prime number from 1 to 100.....

    int num1,i,count=0;

    for(num1 = 1; num1<=100; num1++)
    {
        count=0;

        if(num1<=1)
        {
            count=1;
        }
        else
            {
        for(i = 2; i <= sqrt(num1); i++)
        {
            if(num1%i == 0)
            {
                count=1;
                break;
            }

        }
    }
     if(count==0)
            {
                printf("%d ",num1);
            }

    }
*/

/*
//Print, count and sum of  Prime number from 1 to 100....

    int num1,i,count=0,totalPrimenumbers = 0, sumOfPrimenumbers = 0 ;

    for(num1 = 1; num1<=100; num1++)
    {
        count=0;

        if(num1<=1)
        {
            count=1;
        }
        else
        {
            for(i = 2; i <= sqrt(num1); i++)
            {
                if(num1%i == 0)
                {
                    count=1;
                    break;
                }

            }
        }
        if(count==0)
        {
            printf("%d ",num1);
            totalPrimenumbers++;
            sumOfPrimenumbers = sumOfPrimenumbers + num1;
        }

    }
    printf("\nTotal Prime Numbers = %d\n",totalPrimenumbers);
    printf("Sum Of Prime Numbers = %d\n",sumOfPrimenumbers);
*/


//Print, count and sum of  Prime number from m to n taking input from user....

    int num1,i,count=0,totalPrimenumbers = 0, sumOfPrimenumbers = 0, startingnumber,endingnumber ;

    printf("Take input of Starting number : ");
    scanf("%d",&startingnumber);

    printf("Take input of Ending number : ");
    scanf("%d",&endingnumber);


    for(num1 = startingnumber; num1<=endingnumber; num1++)
    {
        count=0;

        if(num1<=1)
        {
            count=1;
        }
        else
        {
            for(i = 2; i <= sqrt(num1); i++)
            {
                if(num1%i == 0)
                {
                    count=1;
                    break;
                }

            }
        }
        if(count==0)
        {
            printf("%d ",num1);
            totalPrimenumbers++;
            sumOfPrimenumbers = sumOfPrimenumbers + num1;
        }

    }
    printf("\nTotal Prime Numbers = %d\n",totalPrimenumbers);
    printf("Sum Of Prime Numbers = %d\n",sumOfPrimenumbers);
    getch();
}
