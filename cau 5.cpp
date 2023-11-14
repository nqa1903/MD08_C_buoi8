#include <stdio.h>

int main(){
	int n , updateValue , updateIndex;
	printf("nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	printf("nhap vao gia tri can sua : ");
	scanf("%d",&updateValue);
	printf("nhap vao index muon sua : ");
	scanf("%d",&updateIndex);
	int numbers[n];
	for(int i = 0 ; i < n ; i++){
		printf("numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
	if(0<= updateIndex && updateIndex < n){
		numbers[updateIndex] = updateValue;
		for(int i = 0 ; i < n ; i++){
			printf("numbers[%d] = %d \n",i,numbers[i]);
		}
	}else{
		printf("index khong hop le \n");
	}
}
