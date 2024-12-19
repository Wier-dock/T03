#include <stdio.h>

int sum(int a, int b);

int main(){
	int a;
	int b;
	printf("Input two nums:\n");
	
	if (scanf("%d %d", &a, &b)!= 2){ 
		printf("For the program to work you need to enter numbers\n");
		return 1;
	}	

	printf("Sum: %d\n", sum(a, b));
	return 0;
}

int sum(int a, int b){
	return a + b;
}

