#include<stdio.h>

void RevArr(int n , int arr[], int result[]){
    for (int i=n-1;i>=0;i--){
        result[n-1-i] = arr[i];
    }
}  

int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);  
    }
    int result[n];
    RevArr(n,arr,result);
    for (int i=0;i<n;i++){  
        printf("%d ",result[i]);    
    }
    
    return 0;
}
