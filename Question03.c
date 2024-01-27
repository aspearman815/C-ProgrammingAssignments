#include<stdio.h>
#include<string.h>

int main(void){
char str[100];
printf("Input String: ");
fgets(str , sizeof str, stdin);
int i, l=strlen(str);
for(i=l-2;i>-l;i--)
printf("%c", str[i]);
printf("\n");
return 0;
}

