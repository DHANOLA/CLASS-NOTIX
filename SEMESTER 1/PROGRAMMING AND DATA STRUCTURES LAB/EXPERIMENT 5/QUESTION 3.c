#include<stdio.h>
 
void swapv(int,int);        
void swapr(int * num1, int * num2);

void main( )
{
    int n1,n2;
    printf("Enter the two numbers to be swapped\n");
    scanf("%d%d",&n1,&n2);
    printf("\nThe values of n1 and n2 in the main function before calling the swap function are n1=%d n2=%d",n1,n2);
    swapv(n1,n2);
    printf("\nThe values of n1 and n2 in the main function after calling the swapv function are n1=%d n2=%d",n1,n2);}
                                          
    swapr(n1,n2);                                          
        printf("\nThe values of n1 and n2 in the main function after calling the swapr function are n1=%d n2=%d",n1,n2);}

 //call by value
void swapv(int n1,int n2)                           
{ 
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\nThe values of n1 and n2 in the swap function after swapping are n1=%d n2=%d",n1,n2);
}


 //call by reference

void swapr(int * num1, int * num2)
{
    int temp;

    temp = *num1;

    *num1= *num2;

    *num2= temp;

    printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}

