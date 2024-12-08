#include <stdio.h>
long long int collatz_it(long long int n);
int main(){
    long long int n,x;
    printf("Please enter a number:");
    scanf("%lld",&n);
    x=collatz_it(n);
       printf("Total steps:%lld\n",x);
    return 0;
}

int isodd(int n){
    if (n%2==1){
        return 1;
    }
    else {
        return 0;
    }
}

long long int collatz_it(long long int n){
    long long int x=1;
    if (n==1) {
        x=1;
    }
    else {
        while (n!=1){
            if (isodd(n)==0){
                n=n/2;
            }
            else{
                n=3*n+1;
            }
            x=x+1;
        }
    }
    return x;
}

long long int collatz_it(long long int n){
    if (isodd(n)==1){
        n=n/2;
    }
    else {
        n=3*n+1;
    }
    return (n<=1?1:collatz_it(long long int n))
}