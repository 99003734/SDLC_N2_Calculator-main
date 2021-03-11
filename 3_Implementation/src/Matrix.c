# include"matrix.h"
# include<stdio.h>

void MatrixOperations()
{
    int ch;
    int amat[4][4],bmat[4][4];
    static int am,an,bm,bn;
    char mat;        
    do
    {
        printf("\n\n\t\t\t___MATRIXMENU___");
        printf("\n\n1)MATRIX INPUT");
        printf("\n\n2)MATRIX DETERMINANT");
        printf("\n\n3)MATRIX ADDITION");
        printf("\n\n4)MATRIX SUBTRACTION");
        printf("\n\n5)MATRIX MULTIPLICATION");
        printf("\n\n6)TO RESET THE CALCULATOR");
        print("\n\nEnter your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                 printf("\nPress a) for 1st matrix");
                 printf("\nPress b) for 2nd matrix");
                 scanf("%c",&mat);
                 switch(mat)
                 {
                     case 'a':
                        printf("\nEnter Number of Columns");    
                        scanf("%d",&am);
                        printf("\nEnter Number of Rows:");
                        scanf("%d",&an);
                        amat=Matinput(am,an);   
                        break;
                     case 'b':
                        printf("\nEnter Number of Columns");    
                        scanf("%d",&bm);
                        printf("\nEnter Number of Rows:");
                        scanf("%d",&bn);
                        bmat=Matinput(bm,bn);   
                        break;
                  break;
           case 2:
                printf("\nFor which matrix you want Determinant:");
                scanf("%c",&mat);
                switch (mat)
                {
                    case 'a':
                      if(am==an)
                      {
                            determinant(amat,am);
                      }
                      else
                      {
                          printf("\nDeterminant doesn't exist");
                      }
                    break;
                    case 'b':
                      if(bm==bn)
                      { 
                            determinant(bmat,bm);
                      }
                      else
                      {
                          printf("\nDeterminant doesn't exist");
                      }
                    break;
                default:printf("\nError");
                    break;
                }
                 break; 
            case 3:
                 char mat1,mat2;
                 printf("\nEnter matrix's you want to add :");/*like enter a for matrix a , b for matrix b*/
                 printf("\nEnter first matrix:");
                 scanf("%c",&mat1);
                 printf("\nEnter second matrix:");
                 scanf("%c",&mat2);
                 if((am==bm)&&(an==bn))
                 {
                    if(((mat1=='a')&&(mat2=='b'))||((mat1=='b')&&(mat2=='a')))
                    {
                     Mat_addition(amat,bmat,am,an);
                    }
                 }
                 else
                 {
                     printf("\nError");/*Can't add two matrices of unequal dimension*/
                 }
                 break;
            case 4:
                 char mat1,mat2;
                 printf("\nEnter matrix's you want to subtract :");/*like enter a for matrix a , b for matrix b*/
                 printf("\nEnter first matrix:");
                 scanf("%c",&mat1);
                 printf("\nEnter second matrix:");
                 scanf("%c",&mat2);
                 if((am==bm)&&(an==bn))
                 {
                   if((mat1=='a')&&(mat2=='b'))
                   {
                     Mat_subtract(amat,bmat,am,an);
                   }
                   else
                   if((mat1=='b')&&(mat2=='a'))
                   {
                     Mat_subtract(bmat,amat,bm,bn);
                   }
                   else
                   {
                       printf("\nError");
                   }
                 }
                 else
                 {
                     printf("\nError");/*Can't subtract two matrices of unequal dimension*/
                 }
                 break;
            case 5:
                 char mat1,mat2;
                 printf("\nEnter matrix's you want to multiply :");/*like enter a for matrix a , b for matrix b*/
                 printf("\nEnter first matrix:");
                 scanf("%c",&mat1);
                 printf("\nEnter second matrix:");
                 scanf("%c",&mat2);
                 if((mat1=='a')&&(mat2=='b')&&(an==bm))
                 {
                    Mat_multiply(amat,bmat,am,an,bm,bn);
                 }
                 else
                 if((mat1=='b')&&(mat2=='a')&&(bn==am))
                 {
                     Mat_multiply(bmat,amat,bm,bn,am,an);
                 }
                 else
                 {
                     printf("\nError");/*Dimension doesn't satisfies */
                 }
                 break;
            case 6:
                  return 0;
                  break;
            default:
                 printf("Invalid Choice");
                 break;
        }
    } while(1);
}

int** Matinput(int m,int n)
{
    int i,j;
    int matrix[4][4];
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
           printf("b%d%d  ",i,j);                           
           scanf("%d",&matrix[i][j]);
        }
          printf("\n");
    }
    return matrix;
}

void Determinant(int matrix[4][4],int m,int n)
{
    int det;
    if(m==2)
    {
        det=(matrix[1][1]*matrix[2][2])-(matrix[1][2]*matrix[2][1]);
        printf("\nDet: %d",det);
    }
    if(m==3)
    {
        det=((matrix[1][1])*((matrix[2][2]*matrix[3][3])-(matrix[2][3]*matrix[3][2])))-((matrix[1][2])*((matrix[2][1]*matrix[3][3])-(matrix[2][3]*matrix[3][1])))+((matrix[1][3])*((matrix[1][2]*matrix[3][2])-(matrix[2][2]*matrix[3][2])));
        printf("\nDet: %d",det);
    }
}

void Mat_addition(int matrix1[4][4],int matrix2[4][4],int m,int n)
{
    int i,j;
    int add[4][4];
    for(i=1;i<=m;i++)
    {
        for(j=1;i<=n;j++)
        {
            add[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d ",i,j);        
        }
        printf("\n");
    }
}


void Mat_subtract(int matrix1[4][4],int matrix2[4][4],int m,int n)
{
    int i,j;
    int sub[4][4];
    for(i=1;i<=m;i++)
    {
        for(j=1;i<=n;j++)
        {
            sub[i][j]=matrix1[i][j]-matrix2[i][j];
            printf("%d ",i,j);        
        }
        printf("\n");
    }
}

void Mat_multiply(int matrix[4][4],int matrix[4][4],int m1,int n1,int m2,int n2)
{
    int i,j,k;
    int mul[4][4];
    for(i=1;i<=m1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            mul[i][i]=0;/*initializing matrix to be zero matrix*/
        }
    }
    for(i=1;i<=m1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            for(k=1;k<=n1;k++)
            {
                mul[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    for(i=1;i<=m1;i++)
    {
        for(j=1;j<=n1;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}
