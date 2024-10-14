#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Factorial Number...

while(1){
   int n,i,fact=1;

   printf("Enter any positive number : ");
   scanf("%d",&n);

   for(i=1; i<=n; i++)
   {
       fact = fact*i;
   }
   printf("The factorial number is = %d\n",fact);
}
    getch();
}
