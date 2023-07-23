#include<stdio.h>
#include<stdlib.h>

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
    for(int currentposition =0;currentposition<n-1;currentposition++){
        int minIndex = minFinder(arr,currentposition,n-1);

        int temp = arr[currentposition];
        arr[currentposition]=arr[minIndex];
        arr[minIndex]=temp;

    }
}

void printArray(int arr[],int n){
    printf("the element of the array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[7]={3, 5, 4, 2, 1, 8, 7};
    int n=7;

    printf("before sorting: ");
    printArray(arr,n);
    selectionSort(arr,n);
    printf("\nafter sorting: ");
    printArray(arr,n);
    


    return 0;
}