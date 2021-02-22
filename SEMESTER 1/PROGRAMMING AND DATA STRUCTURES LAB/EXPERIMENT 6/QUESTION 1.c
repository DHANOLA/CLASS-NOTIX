#include<stdio.h>


int fact(int);     //function prototype


int main()
{
    int num;
    printf("Enter the number whose factorial is to be find :");
    scanf("%d" ,&num);
    if(num<0)
    {
        printf("ERROR. Factorial is not defined for negative integers");
    }
    printf("Factorial of %d is %d", num, fact(num));  //first call is made
    return 0;
}


int fact(int num)
{
    if(num==0)    //base condition
    {
        return 1;
    }
    else{
        return(num*fact(num-1));   //recursive call
    }
}
