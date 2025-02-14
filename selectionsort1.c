#include<stdio.h>
void Selection_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		int idx=i;
		for(int j=i;j<n;j++){
			if(arr[idx]>arr[j]){ //2 3 1 5 4 
				idx=j;
			}
		}
		int temp=arr[idx];
		arr[idx]=arr[i];
		arr[i]=temp;
	}
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int B[n];
	Selection_sort(A,n);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
