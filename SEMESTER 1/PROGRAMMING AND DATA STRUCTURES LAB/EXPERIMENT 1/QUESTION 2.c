#include <stdio.h>
 
int main()
{
    float celsius, fahrenheit;
 
    printf("Please Enter the temperature in Fahrenheit: \n");
    
    
    scanf("%f", &fahrenheit);
 
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    
    printf("\n %f Fahrenheit = %f Celsius", fahrenheit, celsius);
 
    return 0;
}
