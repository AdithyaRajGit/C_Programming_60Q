#include<stdio.h>
#include<string.h>

int main(){
char st[50];
int count=0,i=0;
printf("Enter the string: ");
fgets(st,50,stdin);
while(st[i]!='\0'){
count++;
i++;
}
printf("%d is length of string \n",count-1);
return 0;
}
