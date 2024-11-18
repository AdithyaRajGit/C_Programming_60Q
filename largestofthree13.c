#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three numbers: ");
scanf("%d %d %d",&a,&b,&c);

((a>b) && (a>c))? printf("%d is largest of three numbers.\n",a):
((b>c) && (b>a))? printf("%d is largest of three numbers.\n",b):
((c>a) && (c>b))? printf("%d is largest of three numbers.\n",c):
0;

((a<b) && (a<c))? printf("%d is smallest of three numbers.\n",a):
((b<c) && (b<a))? printf("%d is smallest of three numbers.\n",b):
((c<a) && (c<b))? printf("%d is smallest of three numbers.\n",c):
0;
}
