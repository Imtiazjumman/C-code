#include <stdio.h>
#include <stdlib.h>

int main()
{
    // For Loop.......
    /*

    int i;

    for(i=1 ; i<=10 ; i++){
        printf("%d\n",i);
    }

    */

    //While Loop...
/*
    int i=1;  //initializing....

    while(i<=10)  //condition.........
        {

        printf("%d\n",i);

        i++; //increment.....

        }
*/
    //Do While loop....
/*
    int i=1;

    do{

        printf("%d\n",i);

        i++;

        }while(i<=10);
*/


// find even and odd number using loop.......


    int i,j;

    printf("Even Number\n");
    for(i=0 ; i<=50 ; i=i+2)

    {
        printf("%d\n",i);

    }
    printf("\nOdd Number\n");
     for(j=1 ; j<=50 ; j=j+2){
         printf("%d \n",j);
     }

    return 0;
}
