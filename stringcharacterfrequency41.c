#include<stdio.h>
#include<string.h>
int main(){
char str[100],ch;
int count=0;
printf("Enter the string: ");
fgets(str,100,stdin);
printf("Enter the character to check frequency: ");
scanf("%c",&ch);
for(int i=0;i<strlen(str);i++){
   if(str[i]==ch){  count++;  }  }
printf("Frequency of %c is %d.\n",ch,count);
return 0;
}
