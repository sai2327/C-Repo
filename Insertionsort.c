#include<stdio.h>
void Insertion_sort(int arr[],int n){
	for(int i=1;i<n;i++){
		//unsorted array lo first element is i which is stored in temp
		int temp=arr[i];
		int j=i-1; //sorted array lo last element j-1
		while(j>=0 && temp<arr[j]){ //checking if temp if less than the elements present in sorted part
			arr[j+1]=arr[j]; //moving the part to forward 
			j--;
		}
		arr[j+1]=temp; //placing the element at the correct position
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	Insertion_sort(A,n);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
