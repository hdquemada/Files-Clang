#include <stdio.h>

int main(void)
{
  char name[10];
  int num1, num2, sum, choice;

  printf("Please enter your first name: \n");
  scanf("%s", name);
  printf("Hello, %s let's do some addition!\n", name);

  do
  {
  choice = 0;
  printf("Please enter the first number: \n");
  scanf("%d", &num1);
  printf("Please enter the second number: \n");
  scanf("%d", &num2);
  sum = num1 + num2;
  printf("The answer is %d\n", sum);
  printf("Do you want to continue? 1 to continue, any other key to quit: \n");
  scanf("%d",&choice);
  } while(choice == 1);

  return 0;
}
