#include <stdio.h>
#define N 50


int main(){
    int A[N];
   
    for (int i=2; i<N; i++){
        A[i]=1;
    }

    for (int i=2; i<N; i++){
        if (A[i]!=0){
            for (int j=2*i; j<N; j=j+i){
                A[j]=0;
            }
        }
    }
    for (int i=2; i<N; i++){
        if (A[i]==1){
            printf("%d is a prime number\n",i);
        }
    }
}