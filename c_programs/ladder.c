#include <stdio.h>

unsigned long long int sum(int pl){
    int array[51];
    if (pl==1) return 1;
    else if (pl==2) return 2;
    else if (pl==3) return 4;
    else {
        array[1]=1;
        array[2]=2;
        array[3]=4;
        for (int i=4;i<=pl; i++){
                array[i]=array[i-1]+array[i-2]+array[i-3];
            }
        return array[pl];
    }
}

int main(){
    int pl;
    do {
    printf("Δώστε τον αριθμό των σκαλιών (1-50):\n");
    scanf("%d", &pl);}
    while (pl<1 || pl>50);

    printf("Το πλήθος των συνδυασμών είναι %llu\n",sum(pl));
    return 0;
}