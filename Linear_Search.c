// Online C compiler to run C program online
#include <stdio.h>
int linear_search(int arr[],int size,int target){
    
    for (int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    int tar;
    printf("enter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the array elements");
    for (int i=0;i<n;i++){
      scanf("%d", &array[i]);  
    }
    printf("enter the target element:");
    scanf("%d" ,&tar);
    int res=linear_search(array,n,tar);
    if(res!=-1){
        printf("target element found at: %d ",res);
    }
    else{
        printf("target element not found");
    }
}