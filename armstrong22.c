#include<stdio.h>
#include<math.h>
int amstrong(int,int);
int numofdig(int);
int power(int, int);
int count,sum;
#include <stdio.h>
#include <math.h>

int amstrong(int, int);
int numofdig(int);
int power(int, int);

int main() {
    int num, n = 0, amstr;
    printf("Enter the number \n");
    scanf("%d", &num);

    n = numofdig(num);
    amstr = amstrong(num, n);

    if (num == amstr) {
        printf("%d is an Armstrong number \n", num);
    } else {
        printf("Armstrong value of the number is %d. So %d is not an Armstrong number \n", amstr, num);
    }

    return 0;
}

int amstrong(int num, int pow) {
    int remainder, result;
    int sum = 0;

    while (num != 0) {
        remainder = num % 10;
        num /= 10;
        result = power(remainder, pow);
        sum += result;
    }
    return sum;
}

int numofdig(int a) {
    int count = 0;
    while (a != 0) {
        a /= 10;
        count++;
    }
    printf("Entered number is %d digit number\n", count);
    return count;
}

int power(int x, int n) {
    return pow(x, n);
}
