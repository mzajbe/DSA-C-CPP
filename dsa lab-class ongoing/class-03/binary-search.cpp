//binary sort from descending order
#include<stdio.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}

void bubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

int binarySearch(int arr[],int n,int key){
    
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key<mid){
            low = mid + 1;
        }
        else
            high = mid-1;
    }
    return -1;
}
int main(){
    int n,key;
    printf("enter array size:");
    scanf("%d",&n);

    int arr[n];
    printf("enter array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter key:");
    scanf("%d",&key);
    printf("before sorting:");
    printArray(arr,n);
    
    bubbleSort(arr,n);
    printf("after sorting:");
    printArray(arr,n);

    int result = binarySearch(arr,n,key);
    
    if(result == -1){
        printf("key not found");

    }
    else
    printf("key found at index:%d",result);


    return 0;

}