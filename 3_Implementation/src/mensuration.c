#include <mensuration.h>
#include<stdio.h>


void mensuration.h()
{
    static double result;
    do
    {
        int ch;
        double num1,num2;

        printf("\n\n\t\t\t___Mensuration MENU___");
        printf("\n\n1)AREA OF SQUARE ");
        printf("\n\n2)AREA OF CIRCLE ");
        printf("\n\n3)AREA OF SPHERE ");
         printf("\n\n4)VOLUME OF SPHERE ");

        printf("\n\n5)TO RESET THE CALCULATOR");
        print("\n\nEnter your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter a number:");
                scanf("%lf",&num1);
                 result= area of square(num1);
                printf("%lf",result);
                break;
           case 2:
                printf("\nEnter a number:");
                scanf("%lf",&num1);
                 result= area of circle(num1);
                printf("%lf",result);
                break;

           case 3:
                printf("\nEnter a number:");
                scanf("%lf",&num1);
                 result= area of sphere(num1);
                printf("%lf",result);
               break;
           case 4:
                printf("\nEnter a number:");
                scanf("%lf",&num1);
                 result= volume of sphere(num1);
                printf("%lf",result);
               break;

              return 0;
            default:
                 printf("\nWrong Choice");
                 break;
        }
    } while(1);
}

double area of square(double num1)
{
    double area of square ;
    area of square =num1*num1;
    return area of square ;
}

double area of circle(double num1)

{
     int pi=3.14;
    double area of circle ;
    area of circle=pi*num1*num1;
    return area of circle ;
}


double area of sphere(double num1)
{
    int pi=3.14;
    double area of sphere;
   area of sphere =4*pi*num1*num1;
    return area of sphere ;
}

double volume of sphere(double num1)
{
int pi=3.14;
    double volume of sphere;
    volume of sphere=(4/3)*pi*num1*num1*num1;
    return volume of sphere;
}
