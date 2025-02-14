#include<stdio.h>
void Bubble_sort(int A[],int n){//function declared
	int i,j;
	for(i=0;i<n;i++){   //represents number of passes
		for(j=1;j<n-i;j++){   //in each pass checks successive numbers 
			if(A[j]<A[j-1]){   //if successive number is smaller swap them
				int temp = A[j];
				A[j] =A[j-1];
				A[j-1] = temp;
			}
		}
	}
	
}
int main(){
	int n,i;
	scanf("%d",&n); //read size of array
	int A[n];   //declare array of size n
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);   //read n elements
		
	}
	Bubble_sort(A,n);   //caling bubblesort function
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
