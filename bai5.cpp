#include<stdio.h>

int main(){
	int arr[]={2,4,6,8,10};
	int end=sizeof(arr)/sizeof(int);
	int found;
	printf("Nhap phan tu muon tim: ");
	scanf("%d",&found);
    int start =0;
    int mid;
    while(start<=end){
    	mid=(start+end)/2;
    	if(arr [mid] == found){
    		break;
		}
		else if(arr [mid] < found){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
}
	if (arr [mid] == found){
		printf("Phan tu ban muon tim %d nam o vi tri %d\n",found,arr[mid]);
	}
	else{
		printf("Phan tu ban muon tim khong co trong mang\n");
	}
	return 0;
}