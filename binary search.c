#include<stdio.h>
int binary_search(int arr[],int left,int right,int target){
 int mid=(left+right)/2;
 if(arr[mid]==target){
     return mid;
 }
 else if(target<arr[mid]){
   return  binary_search( arr,left, mid-1,target);
 }
 else {
    return binary_search(arr,mid+1, right,target);
 }
 return -1;
}
int main(){
    int n;
    int tar;
    printf("enter the number of elements in the array: ");
    scanf("%d",&n);
    int low=0;
    int high=n;
    int array[n];
    printf("enter the array elements");
    for (int i=0;i<n;i++){
      scanf("%d", &array[i]);  
    }
    printf("enter the target element:");
    scanf("%d" ,&tar);
    int res=binary_search(array,low,high,tar);
    if(res!=-1){
        printf("target element found at: %d ",res);
    }
    else{
        printf("target element not found");
    }
}