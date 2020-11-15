#include <stdio.h>
#include "myMath.h"

int main () {

double x;
    printf("Please insert a real number: \n");
    scanf("%lf",&x);

double function1 = sub(add((float)Exponent((int)x),Power(x,3)),2);
double function2 = add(mul(x,3),mul(Power(x,2),2));
double function3 = sub(div(mul(Power(x,3),4),5),mul(x,2));



 printf("The value of f(x) = e^x+x^3-2 for %0.4lf is: %0.4lf\n",x,function1);
 printf("The value of f(x) = 3x+2x^2 for %0.4lf is: %0.4lf\n",x,function2);
 printf("The value of f(x) = (4x^3)/5-2x for %0.4lf is: %0.4lf\n",x,function3);
return 0;

}