#include<string.h> 
#include <stdio.h>
int main()
{

  
  char str[100],i;
    printf("Enter a string: \n");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; ++i);
       printf("\nLength of input string: %d",i);
    
  
printf("The given string is =%s\n",str); 

printf("After reversing string is =%s",strrev(str)); 

return 0; 
} 



