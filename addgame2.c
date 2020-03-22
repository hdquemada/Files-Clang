#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
The stdlib.h library is needed to use the rand and srand functions. The time.h library is needed to use the time function.
*/

int main(void)
{
  char cont, name[10];
  int num1, num2, sum, answer;

  printf("Please enter your first name: \n");
  scanf("%s", name);
  printf("Hello, %s let's do some addition!\n", name);

  do
  {
  srand ( time(NULL) );/* Seed the random number generator.*/
  num1 = rand() % 11;
  printf("Here is the first number: %d\n", num1);
  num2 = rand() % 11;
  printf("Here is the second number: %d\n", num2);
  sum = num1 + num2;
  printf("What is the answer?\n");
  scanf("%d", &answer);
    if(answer == sum) {
    printf("That's correct!\n");
    printf("Hurray! Let's try another one!\n");
    } else {
    printf("That's not right. The right answer is %d. Try again!\n", sum);
    }
  printf("Do you want to continue? Y/y to continue, any other character to quit: \n");
  getchar();/* This line made the program work. Otherwise it would terminate without looping.*/
  scanf("%c", &cont);
  }
  while(cont=='Y' || cont=='y');
  printf("See you next time!\n");
  return 0;
}
