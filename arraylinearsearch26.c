#include<stdio.h>
int main(){
int n,a;
printf("Enter the number of elements in array. \n");
scanf("%d",&n);

int arr[n];
printf("Enter elements of array: \n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);  }

printf("Enter th element to search: ");
scanf("%d",&a);

for(int i=0;i<n;i++){ if(a == arr[i]){ printf("The element is in %d element of array \n",i); }  }
return 0;
}
