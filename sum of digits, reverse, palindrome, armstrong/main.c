#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    // sum of digits....
    /*
        int num,temp,rem,sum=0;
        printf("Enter a number : ");
        scanf("%d",&num);

        temp = num;
        while(temp!=0)
        {
           rem = temp % 10;
           sum = sum + rem;
           temp = temp/10;
        }

        printf("Sum of digits is : %d\n",sum);
    */


// How To Reverse A Number....

    /*
        int num,temp,rem,sum=0;
        printf("Enter a number : ");
        scanf("%d",&num);

        temp = num;
        while(temp!=0)
        {
           rem = temp % 10;
           sum = sum *10 + rem;
           temp = temp/10;
        }

        printf("Reverse number : %d\n",sum);
    */

    /*
    // Palindrome number......(when a number is exact same when we reverse it called palindrome)

    while(1){


        int num,rem,temp,sum=0;

        printf("Enter any number : ");
        scanf("%d",&num);

        temp = num;
        while(temp != 0)
        {
            rem = temp %10;
            sum = sum * 10 + rem;
            temp = temp / 10;
        }

        if(num == sum)
        {
            printf("Palindrome.\n");
        }
        else{
            printf("Not Palindrome.\n");
        }
    }
    */

    /*
    // How to check an Armstrong number
    //(If we take a number make the cube 1^3,5^3 and their sum is exactly same as number)

        int num,temp,rem,sum = 0;
        printf("Enter any Number : ");
        scanf("%d",&num);

        temp = num;
        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + (rem*rem*rem);
            temp = temp/10;
        }

        if(num == sum)
        {
            printf("The Number is Armstrong.\n");
        }
        else{

            printf("The number is not Armstrong.\n");
        }
    */

    /*
    //Counting number of a digit in an integer...

    while(1){
        int num, count = 0;
        printf("Enter any Number : ");
        scanf("%d",&num);

        while(num != 0)
        {
            num = num/10;
            count++;
        }
        printf("The total number are = %d\n",count);
    }

    */


//Strong number.....

//( jader digit gulor factorial num er sum is exact taking num..)

    int num,rem,sum=0,fact,temp,i;

    printf("Enter any number : ");
    scanf("%d",&num);

    temp = num;
    while(temp != 0)

    {

        rem = temp % 10;
        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp/10;
}
        if(sum == num)
        {
            printf("%d Is Strong Number.\n",num);
        }


        else

            printf("%d Is Not Strong Number.\n",num);


    getch();

}
