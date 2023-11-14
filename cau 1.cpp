#include <stdio.h>

int main(){
	int n;
	printf("nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int numbers[n];
	for(int i = 0 ; i < n ; i++){
		printf("numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
	
	int max = numbers[0];
	for(int i = 0 ; i < n ; i++){
		if(max < numbers[i]){
			max = numbers[i];
		}
	}
	printf("%d \n",max);
	
	int min = numbers[0];
	for(int i = 0 ; i < n ; i++){
		if(min > numbers[i]){
			min = numbers[i];
		}
	}
	printf("%d \n",min);
}
