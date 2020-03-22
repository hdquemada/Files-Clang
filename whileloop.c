#include <stdio.h>

int main()
{
char choice;

do
{
 printf("Press y to continue the loop : \n");
 scanf("%c",&choice);
 getchar();/* need this to get the loop to work*/
}while(choice=='y');
return 0;
}
