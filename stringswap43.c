#include<stdio.h>
#include<string.h>
int main(){
char st1[100],st2[100],temp[100];

printf("Enter the first string:");
fgets(st1,100,stdin);
st1[strcspn(st1,"\n")]='\0';

printf("Enter the second string:");
fgets(st2,100,stdin);
st2[strcspn(st2,"\n")]='\0';
printf("Before swapping:\n   String a:%s\n   String b:%s\n",st1,st2);
strcpy(temp, st1);
strcpy(st1, st2);
strcpy(st2, temp);
printf("After swapping:\n   String a:%s\n   String b:%s\n ",st1,st2);
return 0;
}
