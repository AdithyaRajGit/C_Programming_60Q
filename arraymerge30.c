#include<stdio.h>
int main() {
int n,m;

printf("Enter number of elements in first array: ");
scanf("%d",&n);
int arr1[n];
printf("Enter the elements of array: \n");
for(int i=0;i<n;i++) { scanf("%d",&arr1[i]);  }
printf("First Array: \n");
for(int i=0;i<n;i++) { printf("%d  ",arr1[i]); }
printf("\n");

printf("Enter number of elements in second array: ");
scanf(" %d",&m);
int arr2[m];
printf("Enter the elements of second array: ");
for(int i=0;i<m;i++) { scanf("%d",&arr2[i]);  }
printf("Second array: \n");
for (int i=0;i<m;i++) { printf("%d  ",arr2[i]);}
printf("\n");

int arr3[n+m];
for(int i=0;i<n;i++)  {  arr3[i]=arr1[i];  }
for(int i=0;i<=m;i++)  {   arr3[i+n]=arr2[i];   }
printf("Combined array: \n");
for(int i=0; i<n+m;i++)  {printf("%d  ",arr3[i]);}

printf("\n");
return 0;
}











//look into python binding
//1.codeforces 2.codechef  3.topcoder 4.leetcode
