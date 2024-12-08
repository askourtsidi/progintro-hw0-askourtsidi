#include <stdio.h>
#include <stdlib.h>

int print_array(int A[], int N){
    for (int i=0; i<N; i++){
        printf("Δώστε το %dο στοιχείο:",i+1);
        scanf("%d",&A[i]);
        printf("\n");
    }
    for (int i=0; i<N; i++){
        printf("%d\t",A[i]);
    }
    return 0;
}

int main(){
    int N;
    printf("Δώστε τη διάσταση του πίνακα:");
    scanf("%d", &N);
    int A[N];
    int *p;
    p=malloc(N*sizeof(int));
    print_array(A,N);
    printf("\n");
    return 0;
}