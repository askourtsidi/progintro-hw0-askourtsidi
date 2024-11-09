#include <stdio.h>

int main(){
int number;
 printf("Please enter an integer number:\n");
 scanf("%d",&number);
 if (number%2==0)
  printf("The number entered (%d) is: even\n",number);
 else 
  printf("The number entered (%d) is:odd\n",number);
return 0;
}
