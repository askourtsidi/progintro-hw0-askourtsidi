#include <stdio.h>
#include <stdlib.h>

void goodf(int x, int y, int *sum, int *diff){
    *sum=x+y;
    *diff=x-y;
}

int main(){
    int a,b;
    int sum=0;
    int diff=0;
    printf("Δώστε δυο ακέραιους αριθμούς:\n");
    scanf("%d %d",&a,&b);
    goodf(a, b,&sum,&diff);
    printf("Το άθροισμα είναι %d και η αφαίρεση είναι %d\n",sum,diff);
    return 0;
}