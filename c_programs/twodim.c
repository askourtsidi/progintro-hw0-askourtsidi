#include <stdio.h>
#include <stdlib.h>

int print_array(int A[3][5]){
    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            if (j<4){
            printf("%d\t",A[i][j]);
            } else 
            {
                printf("%d\n",A[i][j]);
            }
        }
    }
    return 0;
}

int print_trasposed(int A[3][5]){
    for (int j=0; j<5; j++){
        for (int i=0; i<3; i++){
            if (i<2){
            printf("%d\t",A[i][j]);
            } else
            {
                printf("%d\n",A[i][j]);
            }
        }
    }
    return 0;
}

int  print_reverse(int A[3][5]){
    for (int i=0; i<3; i++){
        for (int j=4; j>(-1); j=j-1){
            if (j>0){
                printf("%d\t",A[i][j]);
            }
            else {
                printf("%d\n",A[i][j]);
            }
        }
    }
    return 0;
}

int main(){
    int A[3][5];
    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            A[i][j]=5*(5-i)+j*(9-j);
        }
    }
    print_array(A);
    printf("\n");
    print_trasposed(A);
    printf("\n");
    print_reverse(A);
    printf("\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            printf("%d\t",A[i][j]);
        }
    }
    printf("\n");
    return 0;
}