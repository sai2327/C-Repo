#include<stdio.h>
void prp(int A[],int n){
// print the output
	int i;
	for(i=0;i<n;i++){
	printf("%d ",A[i]);
}
}
int get_max(int A[],int n){
// find the maximum number
	int i;
	int max = A[0];
	for(i=1;i<n;i++){
		if(max<A[i]){
			max = A[i];
		}
	}
	return max;
}
void radix_sort(int A[],int n){
	int m = get_max(A,n);
	int bucket[10][n],c=0;
	while(m){
		int e = 1,j,i;
		int count[10] = {0}; 
		// segregationn of numbers into buckets
		for(i=0;i<n;i++){
			int pos = (A[i]/e)%10;
			//find the positioon of the bucket entry
			bucket[pos][count[pos]++] = A[i];
			 //store the values according to their places
		}
		// Reconstruction
		for(i=0;i<10;i++){ 
		// store the numbers into original array
		for(j=0;j<count[i];j++){
			A[c] = bucket[i][j];
			printf("//%d ",A[c]);
			c++;
	}
	printf("\n");
}
		e *= 10;
		// check the next place digit
		m /= 10;
		// for while to run upto last place digit
	}
	prp(A,n);
	// recall the function for next place digit
	
}
int main(){
	int n;
	scanf("%d",&n);
	int i,A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	radix_sort(A,n);
	return 0;
}
