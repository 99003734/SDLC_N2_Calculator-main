#include <stdio.h>
#include<math.h>

void Sine_function(double input);//sine operator function
void Cosine_function(double input);//cosine operator function
void Tangent_function(double input);//tangent operator function
void Cosecant_function(double input);//cosecant operator function
void Secant_function(double input);//secant operator function
void Cotangent_function(double input);//cotangent operator function

int main()
{
    int select_option;
    double radian;
    double input;
    int second_Input;
    do
    {
        printf("Enter input Value\n");
        scanf("%lf",&input);
        printf("Please Choose  only one option for Trigonometry Operation\n");
        printf(" 1. Sine\n 2. cosine\n 3. Tangent\n 4. Secant\n 5. Cosecant \n 6. Cotangent\n");
        scanf("%d",&select_option);
        radian=0.017*input;
        switch(select_option)
        {

            case 1: Sine_function(radian);
            break;
            case 2: Cosine_function(radian);
            break;
            case 3: Tangent_function(radian);
            break;
            case 4: Secant_function(radian);
            break;
            case 5: Cosecant_function(radian);
            break;
            case 6: Cotangent_function(radian);
            break;
            default: printf("Inavlid Input!!!! Please choose Correct option\n");
            break;
        }

        printf("Do you want calculate again? \n1. Yes 2. No\n");
        scanf("%d",&second_Input);
    }
    while(second_Input==1);
}
    void Sine_function(double radian ){
        printf("\n %lf\n",sin(radian));
    }
    void Cosine_function(double radian ){
        printf("\n %lf\n",cos(radian));
    }
    void Tangent_function(double radian ){
        printf("\n %lf\n",tan(radian));
    }
    void Cosecant_function(double radian ){
        printf("\n %lf\n",(1.0/sin(radian)));
    }
    void Secant_function(double radian ){
        printf("\n %lf\n",(1.0/cos(radian)));
    }
    void Cotangent_function(double radian ){
        printf("\n %lf\n",(1.0/tan(radian)));
    }
