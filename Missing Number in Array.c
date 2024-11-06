#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        t--;
        int n;
        scanf("%d",&n);
        int arr[n];
        int x=0;
        for(int i=1;i<=n;i++){
            x^=i;
        }
        for(int i=0;i<n-1;i++){
            scanf("%d",&arr[i]);
            x^=arr[i];
        }
        printf("%d\n",x);
    }
}