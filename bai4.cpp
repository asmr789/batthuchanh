#include<stdio.h>
#define MAX_ROW 100

int main(){
	int arr[MAX_ROW];
	int n,found;
	int notfound=0;
	printf("Nhap so ky tu array: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("Nhap phan tu cua mang array[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap phan tu muon tim: ");
	scanf("%d",&found);
	for(int i=0;i<n;i++){
		if(arr[i] == found){
			printf("Phan tu %d trong mang co so thu tu %d ",found,i);
			notfound=1;
			break;
		}
	}
	if(notfound==0){
		printf("Phan tu ban muon tim khong co trong mang");
	}
	return 0;
}