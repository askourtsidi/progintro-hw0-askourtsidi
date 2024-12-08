#include <stdio.h>
#include <math.h>

int main(){
    int dd=11;
    int mm=11;
    long int yyyy=2024;
    int ndd,nmm,x;
    long int nyyyy;

    if (mm<=2){
        nyyyy=yyyy-1;
        nmm=0;
    }
    else {
        nyyyy=yyyy;
        nmm=trunc((4*mm +23)/10);
    }

    x=365*yyyy+dd+31*(mm-1)-nmm+trunc(nyyyy/4)-3.0/4.0*(trunc(nyyyy/100)+1);

    if (x%7==0){
     printf("The day is Saturday");
    }

    if (x%7==1){
     printf("The day is Sunday");
    }

    if (x%7==2){
     printf("The day is Monday");    
    }

    if (x%7==3){
        printf("The day is Tuesday");
    }

    if (x%7==4){
        printf("The day is Wednesday");
    }

    if (x%7==5){
        printf("The day is Thursday");
    }

    if (x%7==6){
       printf("The day is Friday");
    }

}
 return 0; 