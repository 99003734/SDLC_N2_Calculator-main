#include"Combinatorics.h"
#include<stdio.h>

void combinatorics()
{
    do
    {
        int ch;
         int n,r;
         double permres;
         double combres;
        printf("\n\n\t\t\t___COMBINATRONICSMENU___");
        printf("\n\n1)PERMUTATIONS");
        printf("\n\n2)COMBINATIONS");
        printf("\n\n3)TO RESET THE CALCULATOR");
        printf("\n\nEnter your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                  
                  printf("\nEnter total number of objects:");
                  scanf("%d",&n);
                  printf("\nEnter number of permutations you want:");
                  scanf("%d",&r);
                  if(n>=r)
                  {
                    permres=permutations(n,r);
                    printf("%lf",permres);
                  }
                  break;
           case 2:
                   
                   printf("\nEnter total number of objects:");
                   scanf("%d",&n);
                   printf("\nEnter number of combinations you want:");
                   scanf("%d",&r);
                   if(n>=r)
                   {
                    combres=combinations(n,r);
                      printf("%lf",combres);
                   }
                   break;
            case 3:
                  return ;
                  break;
            default:
                 printf("\nError");
                 break;
        }
    } while(1);
}

double factorial(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
      int res=1;
      for(int i=1;i<=num;i++)
      {
        res=res*i;
      }
      return res;
    }
}

double permutations(int n,int r)
{
    double nfact,n_rfact;
    nfact=factorial(n);
    n_rfact=factorial(n-r);

     double per=nfact/n_rfact;
     return per;
}

double combinations(int n,int r)
{
    double n_fact,n_rfact,r_fact;
    n_fact=factorial(n);
    n_rfact=factorial(n-r);
    r_fact=factorial(r);
    double comb=(n_fact)/(r_fact*n_rfact);
    return comb;
}
