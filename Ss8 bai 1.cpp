#include<stdio.h>
int main(){
	int arr[5]={2,3,4,5,8};
	printf("Phan tu trong mang la: ");
	for(int i =4;i>-1;i-=1){
		printf("%d ",arr[i]);
	}	
	return 0 ;
}
