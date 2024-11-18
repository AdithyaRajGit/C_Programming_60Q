#include<stdio.h>
int main(){

int row1,col1;
printf("Enter the number of rows and column of First matrix. \n");
scanf("%d %d",&row1,&col1);
int mat1[row1][col1];
printf("Enter First Matrix Elements: \n");
for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
                        scanf("%d",&mat1[i][j]);  }  }
printf("First Matrix: \n");
for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
                        printf("%d   ",mat1[i][j]);  }  printf("\n");  }

int row2,col2;
printf("Enter the number of rows and column of Second matrix. \n");
scanf("%d %d",&row2,&col2);

if(col1!=row2) printf("!!! Matrix Mulriplication is not possible !!! \n");
else{
 int mat2[row2][col2];
 printf("Enter Second Matrix Elements: \n");
 for(int i=0;i<row2;i++){
         for(int j=0;j<col2;j++){
                         scanf("%d",&mat2[i][j]);  }  }

 printf("Second Matrix: \n");
 for(int i=0;i<row2;i++){
         for(int j=0;j<col2;j++){
                         printf("%d   ",mat2[i][j]);  }  printf("\n");  }


 int mul[row1][col2];
 for(int i=0;i<row1;i++){
         for(int j=0;j<col2;j++){ mul[i][j]=0;}}

 for(int i=0;i<row1;i++){
         for(int j=0;j<col2;j++){
		for(int k=0; k<row2;k++){
                         mul[i][j] += mat1[i][k]*mat2[k][j]; }  }  }


 printf("Multiplication Matrix: \n");
 for(int i=0;i<row1;i++){
         for(int j=0;j<col2;j++){
                  printf("%d   ",mul[i][j]);  }  printf("\n");  }   }

printf("\n");
return 0;

}
