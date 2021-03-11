#include "finance_Calculation.h" //mention .h file 
#include <stdio.h>

#include<math.h>
void finance_Calculation() //created function
{    
    static double result;
    do
    {
    int select_option;
 
    float time_period;
    float rate_of_interest;
 
    double principal_amount;
    
     printf("Please choose only one option for financial operation:\n");//select operation to be performed
     printf(" 1. simple interest\n 2. compound interest\n 3. emi amount\n");//operations
     scanf("%d",&select_option);
     
     switch(select_option)
 {
    case 1 :
     printf("Please enter principal amount(P):\n");//Principal amount
     scanf("%lf",&principal_amount);
     printf("please enter time period(T):\n");//Time period
     scanf("%f",&time_period);
     printf("please enter rate of interest(R):\n");//Rate of interest
     scanf("%f",&rate_of_interest);
     result=simple_Interest(principal_amount,time_period,rate_of_interest);
     printf("%lf",result);
     break;
    case 2:
     printf("Please enter principal amount(P):\n");
     scanf("%lf",& principal_amount);
     printf("please enter time period(T):\n");
     scanf("%f",&time_period);
     printf("please enter rate of interest(R):\n");
     scanf("%f",&rate_of_interest);
     result=compound_Interest(principal_amount,time_period,rate_of_interest);
     printf("%lf",result);
     
    
     break;
    case 3:
    printf("Please enter principal amount(P):\n");//principal amount
     scanf("%lf",&principal_amount);
     printf("please enter time period(T):\n");
     scanf("%f",&time_period);
     printf("please enter rate of interest(R):\n");
     scanf("%f",&rate_of_interest);
     result=emi_Calculator(principal_amount,time_period,rate_of_interest);
     printf("%lf",result);
     
    break;
    default:
    printf("Invalid input!!! Please choose the correct option\n");
    break;
 }
}while(1);
}
double simple_Interest(double principal_amount,float time_period,double rate_of_interest )
{
double simp_Interest;
simp_Interest=principal_amount*time_period*rate_of_interest/100;
return simp_Interest;
}
double compound_Interest(double principal_amount,float time_period,double rate_of_interest )
{
double comp_Interest;
comp_Interest=principal_amount*pow((1 +rate_of_interest/100),time_period)-principal_amount;
return comp_Interest;
}
double emi_Calculator(double principal_amount,float time_period,double rate_of_interest )
{
double emi_Calc;
emi_Calc=(principal_amount * rate_of_interest * pow(1 + rate_of_interest, time_period)) / (pow(1 + rate_of_interest, time_period) - 1);
return emi_Calc;
}
