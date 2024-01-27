Last login: Tue Nov  1 17:56:51 on ttys002
aspearman@Amaras-MBP ~ % ssh aspearman2@snowball.cs.gsu.edu     
aspearman2@snowball.cs.gsu.edu's password: 
Last login: Tue Nov  1 17:57:07 2022 from 131.96.220.81
   +
   |   GSU Computer Science
   |   Instructional Server
   |   SNOWBALL.cs.gsu.edu
   +
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi p5
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi p5.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o p5 p5.c -lm
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./p5
4; 17
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi p5.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi p3.c








#include<stdio.h>
#include<string.h>

int main(void){
char str[100];
printf("input string:");
fgets(str, sizeof str, stdin);
int i, l = strlen(str);
for(i=l-2; i>-1; i--)
printf("%c,", str[i]);
printf("\n");
return 0;
}
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
"p3.c" 13L, 220C                                                     1,1           All
