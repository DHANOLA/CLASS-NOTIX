#include<stdio.h>
int main()
{
     int num;
 
   printf("Enter an integer: ");
   scanf("%d",&num);
 
   // Modulus 
   if ( num%2 == 0 )
      printf("%d is an even number", num);
   else
      printf("%d is an odd number", num);
 
 
    // Ternary
    
    (num % 2 == 0) ?  
    (printf("%d is Even number\n", num)) :  
    (printf("%d is Odd  number\n", num));  
  

 
   return 0;
}
