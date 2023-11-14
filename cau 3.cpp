#include <stdio.h>

int main(){
	int sum = 0;
	int n , findNumber;
	printf("nhap so phan tu cua mang : ");
	scanf("%d",&n);
	printf("nhap vao gia tri findNumber : ");
	scanf("%d",&findNumber);
	int numbers[n];
	for(int i = 0 ; i < n ; i++){
		printf("numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
	for(int i = 0 ; i < n ; i++){
		if(numbers[i] == findNumber){
			printf("numbers[%d] \n", i);
			sum += numbers[i];
		}
	}
	printf("\n");
	printf("tong cac phan tu do la %d",sum);
}
