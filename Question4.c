Last login: Tue Nov  1 17:47:15 on ttys001
aspearman@Amaras-MBP ~ % ssh aspearman2@snowball.cs.gsu.edu
aspearman2@snowball.cs.gsu.edu's password: 
Last login: Tue Nov  1 17:47:34 2022 from 131.96.220.81
   +
   |   GSU Computer Science
   |   Instructional Server
   |   SNOWBALL.cs.gsu.edu
   +
[aspearman2@gsuad.gsu.edu@snowball ~]$ cat > q4.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi q4.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4 q4.c -lm
q4.c: In function ‘main’:
q4.c:8:8: error: invalid operands to binary + (have ‘int *’ and ‘int *’)
 sum=(&a+&b);
        ^
q4.c: At top level:
q4.c:12:6: error: expected identifier or ‘(’ before ‘int’
 void(int *x, int *y)
      ^
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi q4.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4 q4.c -lm
q4.c:12:6: error: expected identifier or ‘(’ before ‘int’
 void(int *x, int *y)
      ^
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi q4.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4 q4.c -lm
q4.c:2:6: error: expected identifier or ‘(’ before ‘int’
 void(int*, int*);
      ^
q4.c:13:7: error: expected identifier or ‘(’ before ‘int’
 void (int *x, int *y)
       ^
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4 q4.c -lm
q4.c:2:6: error: expected identifier or ‘(’ before ‘int’
 void(int*, int*);
      ^
q4.c:13:7: error: expected identifier or ‘(’ before ‘int’
 void (int *x, int *y)
       ^
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi q4.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4 q4.c -lm
q4.c:2:6: error: expected identifier or ‘(’ before ‘int’
 void(int*, int*);
      ^
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi q4.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc q4.c -o
gcc: error: missing filename after ‘-o’
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4.c
gcc: fatal error: no input files
compilation terminated.
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4 q4.c -lm
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./q4
Enter values for A and B
6 7
The Sum is =
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi q4.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4 q4.c -lm
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./q4
Enter values for A and B
5 6
The Sum is =
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi q4.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4 q4.c -lm
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./q4
Enter values for A and B
5 6
The Sum is = 11
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi q4.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o q4 q4.c -lm
q4.c: In function ‘add’:
q4.c:4:11: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘{’ token
 int main(){
           ^
q4.c:14:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘{’ token
 {
 ^
q4.c:2:1: error: parameter name omitted
 void add (int* , int*)
 ^
q4.c:2:1: error: parameter name omitted
q4.c:18:1: error: expected ‘{’ at end of input
 }
 ^
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi q4.c

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
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
"q4.c" 18L, 263C                                                     1,1           All
