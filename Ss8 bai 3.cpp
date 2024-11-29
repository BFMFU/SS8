#include<stdio.h>
int main(){
	int num;
	do{
		printf("Nhap 1 so nguyen bat ki: ");
		scanf("%d",&num);
	} while(num<0);
	int arr[num][num];
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			arr[i][j]=num;
		}
	}	
	printf("Ma tran mang la: \n");
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0 ;
}
