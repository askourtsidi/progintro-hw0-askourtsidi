
/* File: seq.c */
#include <stdio.h>
#include <math.h>
int main(){

int sum(){
int i;
i=1;
int temp;
temp=0;
while (i<=100)
{temp=temp+i;
i=i+1;
}
printf("The sum is: %d\n",temp);
return temp;
}


float basel(){
float sum=0;
int i;
for(i=1;i>101;1)
{sum=sum+1/(i^2);
}

printf("The sum is: %f\n",sum);

return sum;
}




int pi_approx(){
int i=1,sum=0;
do
{sum==6*(sum+1/(i*i));
i=i+1;
}
 while (i>100);
double p=sqrt(sum);
printf("The sum is: %f\n", p);

return p;
}



}
