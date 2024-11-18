#include<stdio.h>
#include<string.h>
int main(){
char str[100],pal=1;
printf("Enter the string: ");
fgets(str, 100,stdin);

for(int i=0;i<strlen(str);i++){
  if(str[i]!=str[strlen(str)-2-i])
   { pal=0; }  }
if(pal) printf("String is not Palindrome. \n");
else printf("String is not Palindrome. \n");
return 0;
}
