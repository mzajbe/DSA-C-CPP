#include<stdio.h>

void printarray(int arr[],int n){
    printf("the element of the array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        printf("\n");
    }

}

int minFinder(int arr[],int first,int last){
    int minIndex = first;
    for(int i=first+1;i<=last;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
    }

    return minIndex;

}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex = minFinder(arr,i,n-1);

        int temp = arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;

    }

}

int main(){
    int arr[7]={3,5,4,2,1,8,7};
    int n=7;
    printarray(arr,n);
    selectionSort(arr,n);
    printarray(arr,n);

    return 0;
}