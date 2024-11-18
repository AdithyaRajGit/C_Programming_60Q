#include<stdio.h>
int main(){
int row,column,temp;

printf("Enter the number of rows and column of matrix. \n");
scanf("%d %d",&row,&column);
int arr[row][column], transps[column][row];
printf("Enter elements of array: \n");
for(int i=0;i<row;i++){
	for(int j=0;j<column;j++){
			scanf("%d",&arr[i][j]);  }  }

printf("Entered Matrix: \n");
for(int i=0;i<row;i++){
	for(int j=0;j<column;j++){
			printf("%d   ",arr[i][j]);  }  printf("\n");  }

for(int i=0;i<row;i++){
	for(int j=0;j<column;j++){
			transps[j][i]=arr[i][j];  }  }

printf("Trenspose Matrix: \n");
for(int i=0;i<column;i++){
	for(int j=0;j<row;j++){
			printf("%d   ",transps[i][j]);  }  printf("\n");  }

printf("\n");
return 0;
}
