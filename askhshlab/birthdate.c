#include <stdio.h>

int d=27;
int m=12;
int y=2006;

int bdc(int d,int m,int y){
 if (m<=2){
  y=y-1;
  m=0;}
 else {
  y=y;
  m=0.4*m+2.3;
}
float a=365*y+d+31*(m-1)-m+(y-1)/4-3/4*(y/100+1);
int b=amod7;
long char day
if (b=0){
 day='saturday';
}
else if (b=1){
day='sunday';
}
else if (b=2){
day='monday';
}
else if (b=3){
day='tuesday';
}
else if (b=4){
day='wednesday';
}
else if (b=5){
day='thursday';
}
else {
day='friday';
}
