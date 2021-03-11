# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | mode switch working for special operations|  mode==1   | shows mode menu | shows mode menu |Requirement based|
|  H_02       |  mode switch working |  mode==2   | Error | Error | Scenario based |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_011    | Adding two numbers | num1= 30, num2=20 |  result=50 | result=50 |Requirement based |
|  L_012    | Subtracting two numbers | num1= 0, num2=3 |  result=-3 | result=-3 |Requirement based |
|  L_013    | Multiply two numbers | num1= 1, num2=0 |  result=0 | result=0 |Requirement based |
|  L_014    | Dividing two numbers | num1= 1, num2=0 |  Error | Error |Requirement based |
|  L_021    | Adding two numbers | num1=750, num2=7500 | result=1500 | result=8250 | Scenario based |
|  L_022    | Subtract two numbers | num1=1000, num2=900 | result=1| result=1900 | Scenario based |
|  L_023    | Multiply two numbers | num1=2, num2=5 | result=2 | result=10 | Scenario based |
|  L_024    | Dividing two numbers | num1=2, num2=2 | result=3 | result=1 | Scenario based |
|  L_03     | Multiplying two 8 digit numbers | num1=100000000,num2=99999999 | result=9999999900000000 | Error | Boundary based |
|  L_041    | Calculating Permutations | n=5,r=1 | permres=5 | permres=5 | Requirement based |
|  L_042    | Calculating Combinations | n=2,r=1 | combres=2 | combres=2 | Requirement based |
|  L_051    | Calculating Permutations | n=6,r=4 | permres=10 | permres=15 | Scenario based |
|  L_052    | Calculating Combinations | n=10,r=4 | combres=40 | combres=210 | Scenario based |
|  L_06     | For both Permutation and combination | n=2, r=5 | Error | Error | Boundary based |
|  L_071    | Calculating Acceleration | v=10, u=5, t=5 | accefunc = 1 | accefunc = 1 | Scenario based |
|  L_072    | Finding capacitive Reactance | f=100, C= 5 | react= 0.00031830| react = 0.00031830 | Requirement based |
|  L_073    | Finding Circular Velocity | r = 100, t = 2 | velocity= 314.159265 | velocity = 314.159265 | Requirement based |
|  L_074    | Finding Circular Velocity | M1 = 1000, M2 = 1000, D = 2 | Force= 0.000016675 | Force = 0.000016675 | Requirement based |
|  L_075    | Finding Projectile motion | V = 25, angle=15 | Range = 31.887755 | Range  = 31.887755 | Requirement based |
|  L_081    | Calculating profit and loss | sp = 120, cp=12 | res = 108 | res  = 108 | Requirement based |
|  L_082    | Calculating Discount | mp = 100, d=15 | disc_price = 85 | disc_price  = 85 | Requirement based |
|  L_091    | For Matrix Determinant | [10 ,20 ,30; 5, 6, 7; 1, 0, 0] | Det=80 | Det=80 | Requirement based |
|  L_092    | Matrix Addition | MAT1=[9 ,30 ,10 ;-2 ,8 ,10 ;10 ,-5 ,50 ], MAT2=[10 ,9 ,-5 ;8 ,2 ,0 ;30 ,4 ,10] | ADD_MAT=[19 ,39 ,5 ;6 ,10 ,10 ;40 ,-1, 60] | ADD_MAT=[19 ,39 ,5 ;6 ,10 ,10 ;40 ,-1, 60] | Requirement based | 
|  L_092    | Matrix Subtraction | MAT1=[9 ,3 ,10 ;-2 ,8 ,10 ;10 ,-5 ,50 ], MAT2=[1 ,9 ,-5 ;8 ,2 ,0 ;30 ,4 ,10] | SUB_MAT=[8 ,-6 ,15 ;-10 ,6 ,10 ;-20 ,-9 , 40] | SUB_MAT=[8 ,-6 ,15 ;-10 ,6 ,10 ;-20 ,-9 , 40] | Requirement based | 
| L_093     | Matrix addition or subtraction | am=2 , an=3 ,bm=2 ,bn=2 | Error | Error | Scenario based |
| L_094     | Matrix multiply | am=1 , an=3 ,bm=2 ,bn=1 | Error | Error | Scenario based |
|  L_101    |Calculate simple interest | principal amount=10000, Time period=2, rate of interest=8 | result=1600 | result=1600 | Requirement based |
|  L_102    |Calculate compound interest | principal amount=10000, Time period=2, rate of interest=8 | result=1728 | result=1728 | Requirement based |
|  L_103    |Calculate EMI amount | principal amount=10000, Time period=2, rate of interest=8 | result=10855 | result=10855 | Requirement based |
|  L_104    |Calculate Loan amount | principal amount=10000, Time period=2, rate of interest=8 | result=10855 | result=10855 | Requirement based |
|  L_111    |Calculate simple interest | principal amount=10000, Time period=3, rate of interest=6 | result=1800 | result=2000 | Scenario based |
|  L_112    |Calculate compound interest | principal amount=30000, Time period=4, rate of interest=9 | result=12942 | result=14000 | Scenario based |
|  L_113    |Calculate EMI amount | principal amount=25000, Time period=2, rate of interest=8 | result=1131 | result=1500 | Scenario based |
|  L_114    |Calculate Loan amount | principal amount=100000, Time period=4, rate of interest=7 | result=2395 | result=2000 | Scenario based |
|  L_121    |Calculate exponent | value=3 | result=20.08 | result=20.08 | Requirement based |
|  L_122    |Calculate logarithm | value=10 | result=1 | result=1 | Requirement based |
|  L_123    |Calculate squareroot | value=144 | result=12 | result=12 | Requirement based |
|  L_131    |Calculate exponent | value=5 | result=148.41 | result=100 |Scenario based |
|  L_132    |Calculate logarithm | value=-10 | result=Error | result=1 |Scenario based |
|  L_133    |Calculate squareroot | value=7878 | result=88.75 | result=70.3 |Scenario based |
|  L_141    | Area of square operation | num1= 3 |  result=9 | result=9 |Requirement based |
|  L_142    | Area of circle operation | num1= 4 |  result=50 | result=50 |Requirement based |
|  L_143    | Area of sphere operation | num1= 9 |  result=113 | result=113 |Requirement based |
|  L_144    | volume of square operation | num1= 1 | result=4 | result=4 |Requirement based |
|  L_151    | Area of square operation | num1= 3 |  result=9 | result=95 |Scenario based |
|  L_152    | Area of circle operation | num1= 4 |  result=50 | result=505 |Scenario based |
|  L_153    | Area of sphere operation | num1= 9 |  result=113 | result=1139 |Scenario based |
|  L_154    | volume of square operation | num1= 1 | result=4 | result=44 |Scenario based |







