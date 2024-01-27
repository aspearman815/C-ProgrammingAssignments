Last login: Tue Nov  1 16:55:54 on ttys000
aspearman@Amaras-MBP ~ % ssh aspearman2@snowball.cs.gsu.edu
aspearman2@snowball.cs.gsu.edu's password: 
Last login: Tue Nov  1 16:56:16 2022 from 131.96.220.81
   +
   |   GSU Computer Science
   |   Instructional Server
   |   SNOWBALL.cs.gsu.edu
   +
[aspearman2@gsuad.gsu.edu@snowball ~]$ cat > Question1.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi Question1.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o Question1 Question1.c -lm
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./Question1
4
enter array elements
1 3 5 6
Segmentation fault (core dumped)
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi Question1.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o Quesion1 Question1.c -lm
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./Question1
8
enter array elements

so0
The sume of the array= 0
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi Question1.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o Question1 Question1.c -lm
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./Question1.c
-bash: ./Question1.c: Permission denied
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./Question1
Enter array size
4
enter array elements
1 3 5 6
Segmentation fault (core dumped)
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./Question1
Enter array size
6
enter array elements
1,2,3,4,5,6
Segmentation fault (core dumped)
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi Question1.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o Question1 Question1.c -lm
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./Question1
Enter array size
4
enter array elements
1 2 3 4
The sume of the array= 10
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi Question1.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ gcc -o Question1 Question1.c -lm
[aspearman2@gsuad.gsu.edu@snowball ~]$ ./Question1
Enter array size
4
enter array elements
1 2 3 4 
The sum of the array= 10
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi Question1.c
[aspearman2@gsuad.gsu.edu@snowball ~]$ vi Question1.c

#include <stdio.h>

int main()
{
int arr[100], size, i , sum=0;
printf("Enter array size\n");
scanf ("%d", &size);

printf("enter array elements\n");
for(i=0;i<size;i++)
scanf ("%d",&arr[i]);

for(i=0; i<size; i++)
sum=sum+arr[i];
printf("The sum of the array= %d\n" , sum);
return 0;
}
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
"Question1.c" 17L, 287C                                              17,1          All
