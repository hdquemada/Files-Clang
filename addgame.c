#include <stdio.h>

int main(void)
{
  char name[10];
  int num1, num2, sum;

  printf("Please enter your first name: \n");
  scanf("%s", name);
  printf("Hello, %s let's do some addition!\n", name);
  printf("Please enter the first number: \n");
  scanf("%d", &num1);
  printf("Please enter the second number: \n");
  scanf("%d", &num2);
  sum = num1 + num2;
  printf("The answer is %d\n", sum);
  return 0;
}
