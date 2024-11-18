#include<stdio.h>
int main(){
char cha;
printf("Enter a character");
scanf("%c",&cha);
if(cha=='a' ||cha=='A'||cha=='E'||cha=='e'||cha=='i'||cha=='I'||cha=='O'||cha=='o'||cha=='U'||cha=='u')
printf("%c is a Vowel\n",cha);
else printf("%c is a Consonant\n",cha);
return 0;
}
