#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char cont, name[10];
  int n, num1, num2, sum;

  printf("Please enter your first name: \n");
  scanf("%s", name);
  printf("Hello, %s let's do some addition!\n", name);

  do
  {
  n = 0;/* Need to reset to 0 before rand or else it will return the same number all the time.*/
  n = rand() %11;
  printf("Here is the first number: %d\n", n);
  printf("Please enter the second number: \n");
  scanf("%d", &num2);
  sum = n + num2;
  printf("The answer is %d\n", sum);
  printf("Do you want to continue? Y/y to continue, any other character to quit: \n");
  getchar();/* This line made the program work. Otherwise it would terminate without looping.*/
  scanf("%c", &cont);
  }
  while(cont=='Y' || cont=='y');

  return 0;
}
