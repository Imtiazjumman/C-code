#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  //Break and Continue.....

    int i;

    for(i=0; i<20; i++)
    {
        if(i%3 == 0)
            continue;
        printf("I = %d\n",i);

        if(i == 12)
            break;
    }
*/

    // Goto Statement.......

    int i;
    scanf("%d",&i);

    level:       // this is a level keyword cz here is colone.
                 // level means place change..

    printf("I = %d\t",i);
    i++;

    if(i<5)
        goto level;

    getch();
}
