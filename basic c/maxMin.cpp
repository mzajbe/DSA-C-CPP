#include<stdio.h>

int min_max(int arr[],int n){
    int min = arr[0];
    int max = arr[0];

    for(int i=1;i<n;i++){
        if (min>arr[i])
        {
            min = arr[i];
        }
        else if(max<arr[i])
        {
            max = arr[i];
        }
        
    }

    return min,max;
}

int main(){
    int n;
    printf("Enter the number of element:");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter array element of %d:",i);
        scanf("%d",&arr[i]);
    }
    
    int min , max;
    // min , max = min_max(arr, n);
    min_max(arr,n);

    printf("the minimum element in the array is %d:",min);
    printf("the maximum element in the array is %d:",max);

    return 0;

}