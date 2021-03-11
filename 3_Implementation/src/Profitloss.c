#include "profitloss.h"
#include <stdio.h>

void profit_loss()
{
    do
    {
        int num;
        double sp, cp, mp, res, d, amount, disc_price;
        printf("\n\n\t\t\t___PROFITLOSS OPERATION MENU___");
        printf("\n\n1)PROFIT_LOSS");
        printf("\n\n3)DISCOUNT");

        printf("Enter your choice: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Enter the selling price of the product ");
            scanf("%lf", &sp);
            printf("Enter the cost price of the product: ");
            scanf("%lf", &cp);
            res = cal_profit(sp, cp);
            printf("%lf", res);
            break;
        case 2:
            printf("Enter the marked price of the product: ");
            scanf("%lf", &mp);
            printf("Enter the discount in (percentage): ");
            scanf("%lf", &d);
            disc_price = discount(mp, d);
            printf("%lf", disc_price);
            break;
        }
    } while (1);
}
double cal_profit(float sp, float cp)
{
    double result;
    if (sp > cp)
    {
        result = sp - cp;
        //printf("%lf is the profit price", result);
    }
    else
    {
        result = cp - sp;
        //printf("%lf is the loss price", result);
    }
    return result;
}

double discount(float mp, float d)
{
    double price, amount;
    amount = mp * (d / 100);
    price = mp - amount;
    //printf("%lf is the discounted price", price);
    return price;
}
