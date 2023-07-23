#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter array size:");
    scanf("%d",&n);

    int arr[n];
    printf("\n\nenter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int temp;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;

}