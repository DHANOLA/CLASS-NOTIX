#include <iostream>
#include <math.h>


using namespace std;

void max_of_four (int,int,int,int)

int main(){

float area=314,len_rec=2,hi_tri=4;
  
  rec_beadth=area/len_rec;
  
  rec_peri=2*len_rec+2*rec_breadth;
    
  side_sq=sqrt(area);

sq_peri=4*sidesq;
  
bse_tri=area/(.5*hi_tri);
  
  
  hypo_tri=sqrt((bse_tri*bse_tri)+(hi_tri*hi_tri));
  
  tri_peri=hi_tri+bse_tri+hypo_tri;
  
circ_radii=sqrt((area)/(22/7));
  
  circ_peri=2*(22/7)*circ_radii;
  
  max_of_four(rec_peri,sq_peri,tri_peri,circ_peri);
  
  return 0;
  
}

   
void max_of_four(float p,float q,float r,float s)
{
  if((p>q)&&(p>r)&&(p>s))
  {
    printf("grater perimetre among all the four is of rectangle  : %f",p);
  }
  else
    {
        if ((q>r) && (q>s))
        {
            printf("grater perimetre among all the four is of square : %f",q);
        }
        else
        {
            if (r>s)
            {
                printf("grater perimetre among all the four is of triangle : %f",r);
            }
            else
            {
                printf("grater perimetre among all the four is of circle : %f",s);

            }
        }
    }
}

