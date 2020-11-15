#include <stdio.h>  
#include "myMath.h"
#define e 2.71828182846

double Power(double x , int y){

    double sum = 1;
    int i;

    for ( i = 0; i < y; i++)
    {
        sum = sum * x;
    }
    
// In order to handle negative exponents.
  for ( i = 0; i > y; i--) 
     {  
          sum = sum * x; 
     }

if (y<0){
     return 1/sum;
      }   


return sum;
}

double Exponent(int x){

    return Power(e,x);
 
}

