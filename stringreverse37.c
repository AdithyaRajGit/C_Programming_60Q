#include<stdio.h>
#include<string.h>

int main(){
int n;
printf("Enter length of string: ");
scanf("%d",&n);
char string[n+1],rev[n+1];
printf("Enter the string: ");
while(getchar() != '\n');
fgets(string,n+1,stdin);
for(int i=0;i<strlen(string);i++){
rev[strlen(string)-2-i]=string[i];  }
printf("\n\nEntered stringn: %s",string);
printf("Reversed string: %s\n",rev);
return 0;
}
