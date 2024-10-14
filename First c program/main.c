#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    ...............Take input manually.................

    printf("Hello world!\n");

    printf("How are you?\n");

    printf("This is my first C programming Practice learning.\n");

    int num1=10;

    int num2=20;

    float num3=10.55;

    double num4=10.55555;

    char ch= 'i';

    printf("Numbers are %d, %d\n",num1, num2);

    printf("num3= %.2f\n",num3);

    printf("num4= %.5lf\n",num4);

    printf("Ch= %c\n",ch);

    getch ();
*/
/*
............taking user input.............

    int num1;
    float num2;
    double num3;
    char ch;

    printf("Take an integer, float,double number and a character value: ");

    scanf("%d %f %lf %c",&num1,&num2,&num3,&ch);

    printf("PRINT All The Values: %d %.2f %lf %c\n",num1,num2,num3,ch);
*/
/*........... using of gets puts getch getchar...............

    char name[50];

    gets(name);
    printf("Hello This is ");
    puts(name);
*/

/*.............fgets..............

    char name[50];

    fgets(name,sizeof(name),stdin);
    printf("Hello This is ");
    puts(name);
*/

    //...................size of int,float,double,char............
/*
    int i;
    float f;
    double lf;
    char c;

    printf("Size of Integer: %d bytes\n",sizeof(i));
    printf("Size of Float: %d bytes\n",sizeof(f));
    printf("Size of Double: %d bytes\n",sizeof(lf));
    printf("Size of Character: %d bytes\n",sizeof(c));
*/

    //................Convert ASCII value into character and character to value............
/*
    int n;
    char ch;
    printf("Enter ASCII value & character: ");
    scanf("%d %c",&n,&ch);

    printf("Print The ASCII Character and ASCII Value: %c and %d",n,ch);

   // printf("Print The ASCII : %d",ch);
*/

//............... Lower To Uppercase letter............
/*
    char lower;
    printf("Take the lower case letter : ");
    scanf("%c", &lower);
    printf("The Upper case letter is : %c",lower-32); // Lower to upper difference is 32.
*/

//............... Uppercase to lower case letter............
/*
    char upper;
    printf("Take the Upper case letter : ");
    scanf("%c", &upper);
    printf("The Lower case letter is : %c",upper+32); // Lower to upper difference is 32.
*/

//...............toupper function...............
// ............USING LIBRARY FUNCTION.....................
/*
    char lower,upper;

    printf("Take any lowercase number: ");
    scanf("%c",&lower);
    upper= toupper(lower);
    printf("Print the Uppercase Value : %c",upper);
*/


//...............tolower function...............
// ............USING LIBRARY FUNCTION.....................
/*
  char lower,upper;

    printf("Take any Uppercase number: ");
    scanf("%c",&upper);
    lower= tolower(upper);
    printf("Print the Lowercase Value : %c",lower);
*/

//.........octal to decimal , decimal to octal.............
/*
    int num1,num2;
    printf("Enter decimal and octal num: ");
    scanf("%d %o",&num1,&num2);
    printf("The Octal number= %o and Decimal number = %d\n ",num1,num2);

*/

//............decimal to hexa , octal to hexa .............

    int num1,num2,num3,num4;
    printf("Enter decimal , Octal , Hexa number1 ,Hexa number2: ");
    scanf("%d %o %x %x",&num1,&num2,&num3,&num4);
    printf("The Hexa-decimal number= %x, Hexa number = %x Decimal number = %d Octal number = %o\n ",num1,num2,num3,num4);
    return 0;
}
