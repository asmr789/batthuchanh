#include<stdio.h>
#define MAX_ROW 100
#define MAX_COW 100

int main(){
	int arr[MAX_ROW][MAX_COW];
	int n,m,temp;
	printf("Nhap so hang cua mang: ");
	scanf("%d",&n);
	printf("Nhap so cot cua mang: ");
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Nhap array[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			}
		}
		printf("Mang chua sap xep: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
	   printf("\n");	
	}
	for(int i=0;i<n;i++){
	   	for(int j=0;j<m-1;j++){
	   		for(int k=0;k<m-j-1;k++){
	   			if(arr[i][k]>arr[i][k+1]){
	   				temp=arr[i][k];
	   				arr[i][k]=arr[i][k+1];
	   				arr[i][k+1]=temp;
				   }
			   }
		   }	
	}
	printf("Mang da sap xep: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
	   printf("\n");	
	}
	return 0;	
}