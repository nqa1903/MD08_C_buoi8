#include <stdio.h>

int main(){
	int n , addValue , addIndex;
	printf("nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	printf("nhap vao gia tri can them : ");
	scanf("%d",&addValue);
	printf("nhap vao vi tri can them : ");
	scanf("%d",&addIndex);
	int numbers[n];
	for(int i = 0 ; i < n ; i++){
		printf("numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
	int newNumbers[n+1];
	for(int i = 0 ; i < addIndex ; i++){
		newNumbers[i] = numbers[i];
	}
	newNumbers[addIndex] = addValue;
	for(int i = addIndex + 1 ; i < n + 1 ; i++){
		newNumbers[i] = numbers[i-1];
	}
	for(int i = 0 ; i < n ; i++){
		printf("%d \t", numbers[i]);
	}
	printf("\n");
	for(int i = 0 ; i < n + 1 ; i++){
		printf("%d \t" , newNumbers[i]);
	}
}
