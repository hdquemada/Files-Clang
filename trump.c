#include <stdio.h>

int main(void) {

  char statement[50];

  printf("Enter Trump's statement: \n");
  scanf("%[^\n]", statement);
  printf("\"%s\" is a False statement!\n", statement);

  return 0;
}
