#include <stdio.h>
 
int main()
{
     number, tempnum;
 
    printf("Enter an integer \n");
    
    
    scanf("%d", &number);
    
    
    tempnum = number;
    
    
        number = number << 2;
    printf("%d x 8 = %d\n", tempnum, number);
    
    }
