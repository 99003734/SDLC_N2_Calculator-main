#include "special_Math_Functions.h"//mention .h file
#include <stdio.h>

#include <math.h>
void math_Functions()
{
   static double result;
    do
    {
    int select_option;
     double input;
      printf("Please choose only one option for special math functions:\n");//choose the operations
     printf(" 1. logarithm calculation\n 2. exponent calculation\n 3. squareroot calculation\n");//operations
     scanf("%d",&select_option);
     switch(select_option)//using switch case
 {
    case 1 :
     printf("Please enter the input value:\n");
     scanf("%lf",&input);
     result = logarithm(input);
     printf("logarithm of %lf is %.2f\n",input,result);
     break;
     case 2 :
     printf("Please enter the input value:\n");
     scanf("%lf",&input);
     result = exponent(input);
     printf("exponent of %lf is %.2f\n",input,result);
     break;
    case 3 :
     printf("Please enter the input value:\n");
     scanf("%lf",&input);
     result = squareroot(input);
     printf("squareroot of %lf is %.2f\n",input,result);
     break;
    default:
    printf("Invalid input!!! Please choose the correct option\n");
    break;
 }
}while(1);
}
double logarithm(double input)//logarithm function
{
double log_value;
log_value = log10(input);
return log_value;
}
double exponent(double input)//exponent function
{
double exp_value;
exp_value = exp(input);
return exp_value;
}
double squareroot(double input)//squareroot function
{
double sqrt_value;
sqrt_value = sqrt(input);
return sqrt_value;
}

    
    
