#include<stdio.h>

typedef struct{
int feet;
int inch;
} Dist;

Dist dist_sum(Dist d1, Dist d2){
Dist d3;
int inch_rem, inch_carry, inch_sum;
inch_sum= d1.inch + d2.inch;
inch_carry=inch_sum/1000;
inch_rem=inch_sum %1000;
d3.feet=d1.feet + d2.feet + inch_carry;
d3.inch=inch_rem;
return d3;
}
int main(void){
Dist d1,d2,d3;
d1.feet=1;
d1.inch=12;
d2.feet=3;
d2.inch=5;
d3=dist_sum(d1,d2);
printf("%d; %d\n", d3.feet, d3.inch);
return 0;
}