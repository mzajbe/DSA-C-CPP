#include<stdio.h>

void printArray(int arr[],int n){
    printf("the element of the array:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}

int minFinder(int arr[],int first,int last){
    int minimumIndex = first;
    for(int i=first+1;i<=last;i++){
        if(arr[i]<arr[minimumIndex]){
            minimumIndex = i;
        }

    }
    return minimumIndex;
}




void selectionSort(int arr[],int n){
    for(int currentPosition =0;currentPosition<n-1;currentPosition++){
        int minIndex = minFinder(arr,currentPosition,n-1);
        
        int temp = arr[currentPosition];
        arr[currentPosition] = arr[minIndex];
        arr[minIndex]=temp;
    }
}

int main(){
    int arr[7]={3,5,4,2,1,8,7};
    int n=7;

    printArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;

}