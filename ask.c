#include <stdio.h>
#include <math.h>

double eta_two(){
    int term;
    scanf("%d",&term);
    int i;
    float sum=0;
    for (i=1;i<=term;i++)
    {
        if (i%2==1)
        {
            sum=sum+(1.0/(i*i));
        }
        else
        {
            sum=sum-(1.0/(i*i));
        }
    }
    printf("The sum is: %f\n",sum);
}

int main(){
    eta_two();
}