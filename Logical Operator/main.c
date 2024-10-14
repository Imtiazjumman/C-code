#include <stdio.h>
#include <stdlib.h>

int main()
{

//Enter a letter to check is it vowel or consonant .....
/*
    char ch;
    printf("Enter any Character: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
*/

//write a program that reads three numbers & display maximum..............

/*
    int num1,num2,num3;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1 > num2 && num1>num3)
    {
        printf("Large Number : %d",num1);
    }
    else if(num2 > num1 && num2>num3)
    {
        printf("Large Number : %d",num2);
    }
    else if(num3 > num1 && num3>num2)
    {
        printf("Large Number : %d",num3);
    }
    else
    {
        printf("Numbers are Equal");
    }

*/

/*
//Leap Year.....

    int year;
    printf("Enter Year: ");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("Leap Year");
    }
    else if(year%4==0 && year%100 != 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
*/

// capital/small letter.........

    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')
    {
        printf("Small Letter.");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Capital Letter.");
    }
    else
    {
        printf("Not a letter.");
    }
    return 0;
}
