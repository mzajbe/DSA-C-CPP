#include<stdio.h>
int main(){
    int n,i;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];

    printf("\n\nenter array element:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\n\nminimum number is:");
    int min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("%d",min);

    return 0;

}