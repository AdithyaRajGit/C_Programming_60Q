#include <stdio.h>

int add(int num1, int num2) {
	return (num1+num2);// printf("%d + %d = %d\n",num1,num2,num1+num2);
	}// Function to add two numbers

int max(int num1,int num2){
	if(num1>num2){return num1;}
	else {return num2;}
}

int swap(int *n1,int *n2){
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}


int main() {
	int a, b, sum,largest;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
   sum = add(a,b);  // Calling the add function
	printf("%d + %d = %d\n\n",a,b,sum);

   largest=max(a,b);
	printf("Largest of two numbers is %d\n\n",largest);

	printf("Before swapping with Temporary variable Number1=%d Number2=%d\n",a,b);
   swap(&a,&b);
	printf("After swapping with Temporary variable Number1=%d Number2=%d\n\n",a,b);
	swap(&a,&b);

	printf("Before swapping without Temporary variable Number1=%d Number2=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping without Temporary variable Number1=%d Number2=%d\n\n",a,b);


return 0;
}
