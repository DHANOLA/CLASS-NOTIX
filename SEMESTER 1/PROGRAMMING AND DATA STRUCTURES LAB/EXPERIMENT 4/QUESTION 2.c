#include<stdio.h>
int main()
{
	
	float vol,vol_c,vol_sphere,r_sphere,r_cylnder,r_cone,h,cone_h;
	printf("enter radius of sphere: ");
	scanf("%f",&r_sphere);
  printf("enter radius of cylinder: ");
	scanf("%f",&r_cylnder);	
  printf("enter height of cylinder: ");
	scanf("%f",&h);
 printf("enter radius of cone: ");
	scanf("%f",&r_cone);

printf("enter slant height of cone: ");
	scanf("%f",&cone_h);
   vol_sphere=(4.0/3.0)*(22/7)*(radius*radius*radius); 
   vol_c=(22/7)*r_cone*cone_h;
	vol=(22*r*r*h)/7;
    printf("Volume of the sphere=%f",vol_sphere);  
        printf("Volume of the cone=%f",vol_c);  
    printf("Volume of the cylinder=%f",vol);  

	return 0;
}
