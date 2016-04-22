#include <iostream>
#include "STDS.h"
using namespace std;
long double *STDS(int n, long double *B, long double *D, long double *A, long double *C)
{
      /*show parameters passed in
      cout << scientific << n << endl;
      for(int i = 0; i<n; i++)
      {
        cout << B[i] << "\t";
        cout << D[i] << "\t";
        cout << A[i] << "\t";
        cout << C[i] << endl;
      } 
      */

      /* Declaration */
      int LP = 2;
      long double R;
      int i,j;

      /* Establish upper triangular matrix */
      for(i = LP; i <= n; i++)
      {
        R = *(B+i-1) / *(D+i-2);
	*(D+i-1) = *(D+i-1) - R* *(A+i-2);
	*(C+i-1) = *(C+i-1) - R* *(C+i-2);
      }

      /* Back substitution */
      *(C+n-1) = *(C+n-1) / *(D+n-1);
      for(i = LP; i <= n; i++)
      {
        j = n-i+1;  // make subscript count backward
	*(C+j-1) = ( *(C+j-1) - *(A+j-1) * *(C+j) ) / *(D+j-1);
      }

      return C;
}
