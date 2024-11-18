#include<stdio.h>
int main(){
int row,column,sumr=0,sumc=0;
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
	sumr += mat[i][j];   }
	printf("Sum of row %d is %d . \n",i+1,sumr);
	sumr=0;  }

for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
        sumc += mat[j][i];   }
	printf("Sum of column %d is %d . \n",i+1,sumc);
	sumc=0;  }

return 0;
}
