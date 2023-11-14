#include <stdio.h>

int main(){
	// khai bao mang , nhap gia tri cac phan tu va in ra cac phan tu
	int numbers[5];
	for(int i = 0 ; i < 5 ; i++){
		printf("number[%d]=",i);
		scanf("%d", &numbers[i]);
	}
	for(int i = 0 ; i < 5 ; i++){
		printf("%d \t",numbers[i]);
	}
}
