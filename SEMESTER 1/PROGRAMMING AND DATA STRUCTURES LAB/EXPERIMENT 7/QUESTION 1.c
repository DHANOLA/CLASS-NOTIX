#include <stdio.h>

 
double det (double A[d][d], int N)
{
    double c, r=1;
    for(int i = 0; i < N; i++) {
        for(int k = i+1; k < N; k++) {
            c = A[k][i] / A[i][i];
            for(int j = i; j < N; j++)
                A[k][j]= A[k][j] - c*A[i][j];
        }
    }
   
   
   for (int i = 0; i < N; i++)
        r *=A[i][i];
    return r;
}
 


int main()
{
      double M[4][4];
 
      for(int i=0; i<4; i++)
      {
		for(int j=0; j<4; j++)
		{
			M[i][j] = rand() % 20;
		}
      }
      printf("Det(M) = %f\n",det(M,4));
      return 0;
}
 
