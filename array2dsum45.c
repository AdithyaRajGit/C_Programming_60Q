#include<stdio.h>
int main(){
int row,column,sum=0;
printf("Enter the number of row and column: \n");
scanf("%d %d",&row,&column);


printf("Enter matrix elements: \n");
int mat[row][column];
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        scanf("%d",&mat[i][j]);  }  }

printf("Entered Matrix is: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                printf("%d ",mat[i][j]);
        }
        printf("\n");
}


for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
	sum +=mat[i][j]; }
    }
printf("%d is the sum of matrix elements. \n",sum);
return 0;
}
