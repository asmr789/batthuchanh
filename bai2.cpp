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
	for(int i=0;i<n-1;i++){
		int min_index=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[min_index]){
				min_index=j;
			}
		}
		int temp=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=temp;
	} 
	printf("Mang sau khi sap xep: \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}