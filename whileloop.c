#include <stdio.h>

int main()
{
char choice;

do
{
 printf("Press y to continue the loop : ");
 getchar();
 scanf("%c",&choice);
}while(choice=='y');
return 0;
}
