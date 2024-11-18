#include<stdio.h>
int main(){
int row,column,max=0,min=1000;
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
	min =(mat[i][j]<min)? min=mat[i][j]:(min=min);
	max =(mat[i][j]>max)? max=mat[i][j]:(max=max);
 }	}
printf("%d is smallest in matrix.\n%d is largest in matrix. \n",min,max);
return 0;
}
