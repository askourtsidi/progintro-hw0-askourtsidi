#include <stdio.h>

struct point {
    double x;
    double y;
}

struct point middle(struct oint a, struct point b){
    struct point m;
    m.x=(a.x+b.x)/2;
    m.y=(a.y+b.y)/2;
    return m;
}

int main(){
    struct point a={1.2,5.4};
    struct point b={7.3,1.8};
    struct point m=middle(a,b);

    printf("Το μέσο του ευθύγραμμου τμήματος με άκρα τα σημεία (1.2,5.4) και (7.3,1.8) είναι (%.2f,%.2f)\n", m.x , m.y);
    return 0;
}