#include<stdio.h>
int main(){
int r,c,diags=0;
printf("Enter the number of row and column: \n");
scanf("%d %d",&r,&c);


printf("Enter matrix elements: \n");
int mat[r][c];
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&mat[i][j]);
        }
}

printf("Entered Matrix is: \n");
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                printf("%d ",mat[i][j]);
        }
        printf("\n");
}
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
	  if(i==j) { diags += mat[i][j]; }
	}
  }

printf("%d is Sum of main diagonal elements of the matrix. \n",diags);
return 0;
}
