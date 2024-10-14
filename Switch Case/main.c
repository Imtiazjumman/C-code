#include <stdio.h>
#include <stdlib.h>

int main()
{

// Switch, case, break, Default..........
/*
    int digit;

    printf("Enter a digit: ");
    scanf("%d",&digit);

    switch(digit)
    {
    case 0:
        printf("ZERO\n");
        break;
    case 1:
        printf("ONE\n");
        break;

    case 2:
        printf("TWO\n");
        break;

    case 3:
        printf("THREE\n");
        break;

    case 4:
        printf("FOUR\n");
        break;

    case 5:
        printf("FIVE\n");
        break;

    case 6:
        printf("SIX\n");
        break;

    case 7:
        printf("SEVEN\n");
        break;

    case 8:
        printf("EIGHT\n");
        break;

    case 9:
        printf("NINE\n");
        break;

    default:

        printf("Not A valid Number.\n");
    }

*/

/*
// switch | vowel/consonant ......

    char ch;
    printf("Enter any Character: ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
        break;

    }
*/

/*
//5.93 : switch | Menu Based Temperature conversion

    int choice;
    float temp,convertedtemp;
    printf("1.Fahrenheit to Celsius.\n");
    printf("2.Celsius to Fahrenheit.\n");
    printf("Enter Your Choice : \n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter The Fahrenheit Temperature : \n");
            scanf("%f",&temp);
            convertedtemp = (temp-32)/1.8;
            printf("The Celsius Temperature : %f\n",convertedtemp);
            break;
        }
    case 2:
        {
            printf("Enter The Celsius Temperature : \n");
            scanf("%f",&temp);
            convertedtemp = (temp*1.8)+32;
            printf("The Fahrenheit Temperature : %f\n",convertedtemp);
            break;
        }
    default:
        {
            printf("Not a Correct Option\n");
        }
    }
*/
/*
//create a calculator using switch case.........

    double num1,num2;
    char op; //operator...

    printf("Enter any Operator (+ , - , * , / ) : ");
    scanf("%c",&op);

    printf("Enter Num1: ");
    scanf("%lf",&num1);

    printf("Enter Num2 : ");
    scanf("%lf",&num2);

    switch(op)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n",num1,num2,num1+num2);
        break;

    case '-':
        printf("%.2lf - %.2lf = %.2lf\n",num1,num2,num1-num2);
        break;

    case '*':
        printf("%.2lf * %.2lf = %.2lf\n",num1,num2,num1*num2);
        break;

    case '/':
        printf("%.2lf / %.2lf = %.2lf\n",num1,num2,num1/num2);
        break;

    default:
        printf("Not a Valid Operator.");
    }
    return 0;
}
*/
