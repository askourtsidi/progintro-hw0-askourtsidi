#include <stdio.h>

int main(){
    for (int i=33; i<=105; i++){
        if (i%3==0){
            printf("%c-(dec: %d, hex: %x\n)",i,i,i);
        }
    }
return 0;
}