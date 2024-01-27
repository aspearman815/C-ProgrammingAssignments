#include<stdio.h>
void add (int* , int*)

int main(){
int a, b ;
int sum;
printf("Enter values for A and B\n");
scanf("%d%d", &a,&b);
sum=sum+(a+b);
printf("The Sum is = %d\n" , sum);
return 0;
}
void add(int *x, int *y)
{
int temp;
temp = *x + *y ;
*y = temp;
}
