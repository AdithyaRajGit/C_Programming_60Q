#include<stdio.h>
int main(){
int row,column,sym=1;
printf("Enter the number of row and column: \n");
scanf("%d %d",&row,&column);
if(row!=column) sym=0;

if(row==column){
//2D array scanning
printf("Enter matrix elements: \n");
int mat[row][column];
for(int i=0;i<row;i++){
	for(int j=0;j<column;j++){
	scanf("%d",&mat[i][j]);
	}
}

printf("Entered Matrix is: \n");
for(int i=0;i<row;i++){
	for(int j=0;j<column;j++){
		printf("%d ",mat[i][j]);
	}
	printf("\n");
}


for(int i=0;i<row;i++){
	for(int j=0;j<column;j++){
		if(mat[i][j]!=mat[j][i]){
		   sym =0;
		   }
	}
}
}
if(sym) printf("Matrix is Symmetric. \n");
else printf("Matrix is assymetric. \n");
return 0;
}
