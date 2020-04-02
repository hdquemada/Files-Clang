/*This program calculates the sine of a number between 0 and 1*/
/*Written by Hector Quemada*/
/*April 1, 2020*/

/*use the standard library and the math library*/
#include <stdio.h>
#include <math.h>//enables us to calculate sine
int main(void)
{
  double inputvalue, sine;//declare variables
  printf("Input a value between 0 and 1: \n");
  scanf("%lf", &inputvalue);
  if(inputvalue>0 && inputvalue<1)//checks if the input is between 0 and 1 noninclusive
  {
  printf("The sine of %lf is: %lf\n", inputvalue, sin(inputvalue));//calculates sine
  } else
  {
  printf("The number you entered is not in the acceptable range. Exiting now.\n");//exits if input is not acceptable
  }

  return 0;
}
