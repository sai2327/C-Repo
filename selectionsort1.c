//selection sort is based on index selection in which element positioned at the index is greater than successive elements .
//in this smaller numbers are sorted first --> smallest element comes to first in first pass,in second pass second smallest element comes to second place.
#include<stdio.h>
void Selection_sort(int arr[],int n){   //function declared
	for(int i=0;i<n;i++){  //for n number of test cases
		int idx=i; //index starting at i
		for(int j=i;j<n;j++){  //inner loop for cheking successive elements
			if(arr[idx]>arr[j]){ //2 3 1 5 4 
				idx=j; //if array of j is < eelemt at idx replace idx with j 
			}
		}
		int temp=arr[idx]; //swap them
		arr[idx]=arr[i];
		arr[i]=temp;
	}
}
int main(){
	int n,i,j;
	scanf("%d",&n);  //read size of array
	int A[n];   //declare array of size n
	for(i=0;i<n;i++){  
		scanf("%d",&A[i]);  //read n elements
	}
	int B[n];
	Selection_sort(A,n);    //caling selectionsort function
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
