#include<stdio.h>
#define MAX_ROW 100

int main(){
	int arr[MAX_ROW];
	int n;
	printf("Nhap so ky tu array: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("Nhap phan tu cua mang array[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i< n;i++){
		int key=arr[i];
		int j = i-1;
	while (j>=0 && key < arr[j]){
		arr[j+1]=arr[j];
		j=j-1;
	}
	arr[j+1]=key;
	}
	printf("Mang sau khi sap xep: \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}