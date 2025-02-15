#include<stdio.h>
void Merge(int A[],int n,int left, int right,int mid){
	int i = left;
	int j = mid + 1;
	int B[right-left+1];
	//to make an other array to store the sorted elements
	int k=0;
	while(i<=mid && j<=right){
	//sort and store elements
		if(A[i]<= A[j]){
			B[k++] = A[i++];
		}
		else{
			B[k++] = A[j++];
		}
	}
	while(i<=mid)B[k++] = A[i++];
	while(j<=right)B[k++] = A[j++];
	k=0;
	for(i=left;i<=right;i++){
	//copy sorted elemtents to main array
		A[i] = B[k++];
	}
}
void MergeSort(int A[],int n,int left,int right){
	if(left>=right) return;
	// when it reached to middle it stopes
	
	int mid = (left+right)/2;

	MergeSort(A,n,left,mid);
	//store the 1st part elements
	MergeSort(A,n,mid+1,right);
	//store the 1st part elements
	Merge(A,n,left,right,mid);
	// sort the elements that are given
}
int main(){
	int n;
	scanf("%d",&n);
	int A[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	MergeSort(A,n,0,n-1);
	for(i=0;i<n;i++) printf("%d ",A[i]);
}
