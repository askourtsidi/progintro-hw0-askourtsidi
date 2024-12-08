#include <stdio.h>
#include <stdlib.h>

void print_array(int *a,int n){
    for (int i=0; i<n; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}

int main(){
    int n=8;
    int a[n];
    for (int i=0; i<n; i++){
        a[i]=i*i;
    }
    print_array(a,n);
    int *pa=&a[0];
    a[6]=*(a+4);
    *(pa+3)=a[5];
    a[0]=*((pa++)+2);
    *((++pa)+5)=a[1];
    *(&a[5]-1)=*(--pa);
    print_array(a,n);
    return 0;
}