#include<stdio.h>
#include<string.h>
int main(){
int count=0;
char str[100];
printf("Enter string: \n");
fgets(str, 100, stdin);
//printf("Length:%ld",strlen(str));
for(int i=0; i<strlen(str);i++){
if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
{
count++;
}  }
printf("Number of vowels present in string is: %d\n",count);
return 0;
}
