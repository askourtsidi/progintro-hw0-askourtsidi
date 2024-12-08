#include <stdio.h>
#include <stdlib.h>

int main(){
 int x;
  printf("Enter a number:\n");
  scanf("%d",&x);
  for (int i=1; i<x; i++){
    if (i==1){
        putchar('*');
    }
    else {
        for (int j=1; j<=i-1; j++){
            putchar('*');
        }
         putchar(10);
    }
  }
  return 0;
}
