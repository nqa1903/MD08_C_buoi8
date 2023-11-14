#include <stdio.h>

int main(){
	int n;
	printf("nhap so phan tu cua mang 1 chieu :");
	scanf("%d",&n);
	int numbers[n];
	for(int i = 0 ; i < n ; i++){
		printf("numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
	//in ra gia tri cua mang
	for(int i = 0 ; i < n ; i++){
		printf("%d \n", numbers[i]);
	}
	//in ra gia tri chan 
	for(int i = 0 ; i < n ; i++){
		if(numbers[i] % 2 == 0){
			printf("%d \t",numbers[i]);
		}
	}
	//in ra tong gia tri le
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		if(numbers[i] % 2 != 0){
			sum += numbers[i];
		}
	}
	printf("%d", sum);
}
