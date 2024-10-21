#include<stdio.h>
int main(){
	printf("enter number of rows:");
	int row,column;
	scanf("%d",&row);
	printf("enter number of column:");
	scanf("%d",&column);
	int arr[row][column];
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("arr[%d][%d]:%d\n",i,j,arr[i][j]);
		}
	}
}
