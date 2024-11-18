#include<stdio.h>
#include<string.h>
int main(){
char str1[50],str2[50],str3[100];
printf("Enter the first string: ");
fgets(str1,50,stdin);
printf("Enter the second string: ");
fgets(str2,50,stdin);
for(int i=0;i<strlen(str1);i++){
	str3[i]=str1[i];  }
for(int i=0;i<strlen(str2);i++){
	str3[i+strlen(str1)-1]=str2[i];  }
printf("Combined array: %s",str3);

}
