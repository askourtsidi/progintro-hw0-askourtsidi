#include <stdio.h>
#include <stdlib.h>

int fib(int n){
    if (n==0) return 0;
    else if (n==1) return 1;
    else
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    printf("Δώσε έναν ακέραιο αριθμό:");
    scanf("%d",&n);
    printf("Ο n-οστος όρος είναι ο:%d\n", fib(n));
 return 0;
}