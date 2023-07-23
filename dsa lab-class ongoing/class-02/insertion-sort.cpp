#include<stdio.h>

void printArray(int arr[],int n){
    printf("the element of the array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        printf("\n");
    }

}

void insertionSort(int arr[],int n){
    for(int index = 1 ; index < n;index++){
        int key = arr[index];
        int candidateIndex = index;
        while(candidateIndex>0 && arr[candidateIndex-1]>key){
            arr[candidateIndex]=arr[candidateIndex-1];
            candidateIndex--;
        }
        arr[candidateIndex]=key;
    }
}





int main(){
    int arr[7]={3,5,4,2,1,8,7};
    int n=7;
    printArray(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);

    return 0;
}