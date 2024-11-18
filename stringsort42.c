#include<stdio.h>
#include<string.h>

int main(){
char str[50],temp;

printf("Enter the string: ");
fgets(str,50,stdin);
printf("Before sorting: %s",str);
for(int i=0;i<strlen(str)-1;i++){
  for(int j=i+1;j<strlen(str)-1;j++){
   if(str[j]<str[i]){
	temp=str[j];
	str[j]=str[i];
	str[i]=temp;
	}  }  }
printf("After sorting: %s",str);
return 0;
}
