#include<stdio.h>
void Bubble_sort(int A[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++){
		if(A[j]<A[j-1]){
			int temp = A[j];
			A[j] =A[j-1];
			A[j-1] = temp;
		}
		}
	}
	
}
int main(){
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	Bubble_sort(A,n);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
