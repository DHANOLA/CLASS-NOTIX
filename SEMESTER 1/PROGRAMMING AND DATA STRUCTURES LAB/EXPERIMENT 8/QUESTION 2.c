#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main ()
  struct crc
    {
    char name [20];
    int age;
    
    struct debt{

      char month;
       
      int date;
      
      int year;
    
    


    }d
    
    int test;
    int avg;
    }  c[200];

    int x=0,i=0,j=0,k=0,a=0;
    int code,amount=0; char cusacc;
    int current_b=0;

    printf("Enter how many cricter data you want to enter ;Limit 200\n");
    scanf("%d", &x);

    printf("Enter Name, age and avg score and no of test matches for each user respectively:\n");
    for (i=0;i<x;i++)
      {              printf("\nenter name of%d circkter is =",a+1);
    scanf (" %s", &c[i].name);
    printf("\nenter age of circkter  is=");
    scanf ("  %d",&c[i].age);
       printf("\nenter no of test matches=");
    scanf (" %d",&c[i].test);
     printf("\nenter avg score=");
    scanf (" %d",&c[i].avg);}

    printf("\n\nData of All The circkter:");
    printf("\nName\t\t Account Number\t\t Balance\n_______________________________________");

    for(i=0;i<x;i++)
       {
     printf ("\n\n name of %d circter is= %s\t\age of circkter=%d\t\tno of test matches is= %d\t\tavg score= %d",a+1,c[i].name,c[i].age,c[i].test,c[i].avg);
    }
    printf ("Name\t\tAccount Number\n___________________________________________");


    getch();
}
