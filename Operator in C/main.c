#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    // take 2 input from user and make sum, subtract,multiplication,division,remainder.......................

    //sum of 2 numbers........
/*
    int num1,num2,sum,sub,mult;

    float avg, div, remainder;

    printf("Take two integer Numbers: ");

    scanf("%d %d",&num1,&num2);

    sum=num1+num2;

    avg=(float)sum/2; // type casting....

    sub=num1-num2;

    mult=num1*num2;

    div=num1/num2;

    remainder= num1%num2;

    printf("Sum of two numbers is: %d\n",sum);
    printf("Average of two numbers is: %.2f\n",avg);
    printf("Subtract of two numbers is: %d\n",sub);
    printf("Multiplication of two numbers is: %d\n",mult);
    printf("Division of two numbers is: %.2f\n",div);
    printf("Remainder of two numbers is: %.2f\n",remainder);
*/

//calculate the area of a triangle.........
/*
    float height,base,area;
    printf("Base = ");
    scanf("%f",&base);

    printf("Height = ");
    scanf("%f",&height);

    area= (float)1/2 * base * height;
    printf("The area is = %.2f",area);
*/



//Calculate ত্রিভুজের ৩ বাহুর দৈর্ঘ্য এর ক্ষেত্রফল নির্ণয়ের জন্য C program

// Area= sqrt(s*(s-a)*(s-b)*(s-c));
//S= (a+b+c)/2; S mean Semi perameter....
// sqrt takes double value..........
/*
    double a,b,c,s,area;

    printf("Take Three Values: ");

    scanf("%lf %lf %lf",&a,&b,&c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The Area is : %.2lf\n",area);
*/



// Area of a rectengle (length*width)
/*
    float length, width, area;

    printf("Enter the length: ");
    scanf("%f",&length);

    printf("Enter the width: ");
    scanf("%f",&width);

    area = length*width;

    printf("The area of the Rectangle: %.2f\n",area);
*/



//বৃত্তের ক্ষেত্রফল নির্ণয়ের জন্য C program
/*
//radius = pi*radius*radius......

    float radius,area; //,PI=3.1416
    printf("Enter the radius: ");
    scanf("%f",&radius);

    area = M_PI*radius*radius; //Using Library Function.........
    printf("The area of the Circle: %.2f\n",area);
*/



/*
    // Amplitude of Circle.......

    float radius,amplitude;
    printf("Enter the Radius: ");
    scanf("%f",&radius);

    amplitude = 2* M_PI* radius*radius;
    printf("The Amplitude of the Circle is: %f\n",amplitude);
*/



/*
//Centigrade to Fahrenheit......
// (c/5)=(f-320)/9...f=(c*1.8)+32...
// Fahrenheit to centigrade...
//c=(f-32)/1.8...

    float c,f;

    printf("Take centigrade: ");
    scanf("%f", &c);
   // printf("Take the fahrenheit: ");
   // scanf("%f", &f);

    f= (c*1.8)+32;
   // c=(f-32)/1.8;

    printf("The Fahrenheit value is: %.2f\n",f);
    //printf("The Centigrade value is: %.2f\n",c);
*/


/*
// How to swap two numbers with temporary variable....

    int num1,num2,temp;

    printf("Take Two integers: ");
    scanf("%d %d",&num1,&num2);

    temp = num1;  //temp = 10
    num1 = num2;  //num1 = 5
    num2 = temp;  //num2 = 10;

    printf("The value of Number 1 = %d\nThe value of Number 2 = %d\n",num1,num2);
*/

/*
// How to swap two numbers with temporary variable..........

    int num1,num2;

    printf("Take Two integers: ");
    scanf("%d %d",&num1,&num2);   //10,5

    num1 = num1 - num2; //5
    num2 = num1 + num2; //10
    num1 = num2 - num1; // 5

    printf("The value of Number 1 = %d\nThe value of Number 2 = %d\n",num1,num2);
*/




//quadratic equation | ax^2+bx+c C program

    double a,b,c,d,x1,x2;

    printf("Take a,b,c : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = sqrt(b*b - 4*a*c);

    x1 = (- b + d) / (2*a);
    x2 = (- b - d) / (2*a);

    printf("X1 = %lf\n",x1);
    printf("X2 = %2lf\n",x2);

    return 0;
}
