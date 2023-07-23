#include<stdio.h>
int arraySum(int arr[],int n){
    int summation = 0;
    for(int i=0;i<n;i++){
        summation += arr[i];
    }
    return summation;
}

int main(){
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = arraySum(arr,n);

    printf("summation is:%d",sum);

    return 0;
    

}

