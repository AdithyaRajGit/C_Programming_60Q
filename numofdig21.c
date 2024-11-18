#include <stdio.h>
int main() {
    int n,count=0,original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
	n/=10;
	count++;}
   printf("%d have %d number of digits",original,count);
return 0;
}
