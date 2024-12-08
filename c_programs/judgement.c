#include <stdio.h>
#define N 10

int max_array(int *A, int N){
    int max=-1;
    for (int i=0; i<N; i++){
     if (A[i]>max){
      max=A[i];
     }
    }
    return max;
}

int min_array(int *A, int N){
    int min=10;
    for (int i=0; i<N; i++){
        if (A[i]<min){
            min=A[i];
        }
    }
    return min;
}

int sum_array(int *A, int N){
    int sum=0;
    for (i=0; i<N; i++){
        sum=sum+A[i];
    }
    return sum;
}


int main(){
    int A[N];
    printf("Enter grades:\n");
    for (int i=0; i<N; i++){
        scanf("%d",&A[i]);
    }
    printf("Sum:%d\n",sum_array(A,N));
    printf("Max:%d\n",max_array(A,N));
    printf("Min:%d\n",min_array(A,N));

}