#include<stdio.h>
int main(){
int row,column;
printf("Enter the number of rows and column of matrix. \n");
scanf("%d %d",&row,&column);

int mat1[row][column], mat2[row][column], add[row][column];
printf("Enter First Matrix Elements: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                        scanf("%d",&mat1[i][j]);  }  }

printf("First Matrix: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                        printf("%d   ",mat1[i][j]);  }  printf("\n");  }

printf("Enter Second Matrix Elements: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                        scanf("%d",&mat2[i][j]);  }  }

printf("Second Matrix: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                        printf("%d   ",mat2[i][j]);  }  printf("\n");  }


for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){  add[i][j]=mat1[i][j]+mat2[i][j];  }   }


printf("Addition Matrix: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                        printf("%d   ",add[i][j]);  }  printf("\n");   }

return 0;
}
