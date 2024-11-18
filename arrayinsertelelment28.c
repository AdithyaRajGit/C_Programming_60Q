#include<stdio.h>
int main(){
int n,num,p;
printf("Number of elements in array: \n");
scanf("%d",&n);
int arr[n+1];
printf("Enter array elements: \n");
for(int i=0; i<n; i++){  scanf("%d",&arr[i]);  }
printf("Array is: \n");
for(int i=0; i<n; i++){  printf("%d  ",arr[i]);  }
printf("\n");

printf("Enter number you want to insert.\n");
scanf("%d",&num);
printf("Enter the place to which you want to insetr the number: \n");
scanf("%d",&p);

for(int i=n;i>=p;i--){  arr[i]=arr[i-1];  }
arr[p-1]=num;

printf("Current Array is: \n");
for(int i=0; i<n+1; i++){  printf("%d  ",arr[i]);  }
printf("\n");
}
