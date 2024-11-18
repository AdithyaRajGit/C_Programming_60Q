#include<stdio.h>
#include<string.h>
int main(){
char str[100];
char copy[100];
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
for(int i=0;i<strlen(str);i++){
   copy[i]=str[i]; }
copy[strlen(str)]='\0';
printf("Copied string is: %s\n",copy);
return 0;
}
