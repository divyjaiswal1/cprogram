#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define note "ENTER VALID OPERATION"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void square();
void cube();
void squareRoot();
void cubeRoot();
void sin();
void cos();
void tan();
void cot();
void sec();
void cosec();
void radian_to_degree();
void degree_to_radian();
void log();
void perc();
void grade();
void binary_to_decimal();
void decimal_to_binary();
void octal_to_hexadecimal();
void hexadecimal_to_decimal();
void rect_to_pol();
void pol_to_rect();
int main()
{
printf("\t\tWELCOME TO OUR CALCULATOR\n\n");
int n;
printf("Enter 1 for ADDITION:\n");
printf("Enter 2 for SUBTRACTION:\n");
printf("Enter 3 for MULTIPLICATION:\n");
printf("Enter 4 for DIVISION:\n");
printf("Enter 5 for MODULUS:\n");
printf("Enter 6 to calculate POWER:\n");
printf("Enter 7 to calculate FACTORIAL:\n");
printf("Enter 8 to find SQUARE:\n");
printf("Enter 9 to find CUBE:\n");
printf("Enter 10 to find SQUARE ROOT:\n\n");
printf("Enter 11 to find CUBE ROOT:\n\n");
printf("Enter 12 to find value of sin of angle in terms of degree:\n\n");
printf("Enter 13 to find value of cos of angle in terms of degree:\n\n");
printf("Enter 14 to find value of tan of angle in terms of degree:\n\n");
printf("Enter 15 to find value of cot of angle in terms of degree:\n\n");
printf("Enter 16 to find value of sec of angle in terms of degree:\n\n");
printf("Enter 17 to find value of cosec of angle in terms of degree:\n\n");
printf("Enter 18 to convert from radian to degree:\n\n");
printf("Enter 19 to convert from degree to radian:\n\n"); //exponential
printf("Enter 20 to find LOG OF REAL NUMBERS:\n\n");
printf("Enter 21 to find percentage:\n");
printf("Enter 22 to find grade according to percentage:\n\n");
printf("Enter 23 to convert from Binary to Decimal:\n");
printf("Enter 24 to convert from Decimal to Binary:\n");
printf("Enter 25 to convert from Octal to Hexadecimal:\n");
printf("Enter 26 to convert from Hexadecimal to Decimal:\n");
printf("Enter 27 to convert from Rectangular form to Polar form:\n\n");
printf("Enter 28 to convert from Polar form to Rectangular form:\n\n");
printf("\n******Enter 0 to exit from the program:******\n");
while(1)
{
printf("\n\nChoose From The Following Operations you want to do :");
//coding part using functions swich statements and if else
//user need to follow the printf statement
scanf("%d",&n);
switch(n)
{
 case 1: addition();
 break;
 case 2: subtraction();
 break;
 case 3: multiplication();
 break;
 case 4: division();
 break;
 case 5: modulus();
 break;
 case 6: power();
 break;
 case 7: factorial();
 break;
 case 8: square();
 break;
 case 9: cube();
 break;
 case 10: squareRoot();
 break;
 case 11: cubeRoot();
 break;
 case 12: sin();
 break;
 case 13: cos();
 break;
 case 14: tan();
 break;
 case 15: cot();
 break;
 case 16: sec();
 break;
 case 17: cosec();
 break;
 case 18: radian_to_degree();
 break;
 case 19: degree_to_radian();
 break;
 case 20: log();
 break;
 case 21: perc();
 break;
 case 22: grade();
 break;
 case 23: binary_to_decimal();
 break;
 case 24: decimal_to_binary();
 break;
 case25: octal_to_hexadecimal();
 break;
 case 26: hexadecimal_to_decimal();
 break;
 case 27: rect_to_pol();
 break;
 case 28: pol_to_rect();
 break;
 case 0: exit(0);
 default:
 printf("\n**********%s**********\n",note);
 }
}
return 0;
}
void addition()
{
 printf("Enter the numbers to be added:");
 int a,b;
 scanf("%d%d",&a,&b);
 printf("The SUM of a & b is %d\n",a+b);
}
void subtraction()
{
 printf("Enter the numbers to be subtracted:");
 int a,b;
 scanf("%d%d",&a,&b);
 printf("The DIFFERENCE of a & b is %d\n",a-b);
}
void multiplication()
{
 printf("Enter the numbers to be multiplied:");
 int a,b;
 scanf("%d%d",&a,&b);
 printf("The PRODUCT of a & b is %d\n",a*b);
}
void division()
{
 printf("Enter the numbers to be divided:");
 int a,b;
 scanf("%d%d",&a,&b);
 printf("The DIVISION of a & b is %f\n",(float)a/(float)b);
}
void modulus()
{
 printf("Enter the numbers you want to find modulus of:");
 int a,b;
 scanf("%d%d",&a,&b);
 printf("The MODULUS of a & b is %d\n",a%b);
}
void power()
{
 printf("Enter the base and the power:");
 double a,b;
 scanf("%lf%lf",&a,&b);
 double c=pow(a,b);
 printf("The POWER is %lf\n",c);
}
void factorial()
{
printf("Enter the number you want to find factorial of:");
 int n,factorial;
 scanf("%d",&n);
 factorial=1;
 for(int i=1;i<=n;i++)
 {
 factorial=factorial*i; //factorial*=i;
 }
 printf("The FACTORIAL of %d is %d",n,factorial);
}
