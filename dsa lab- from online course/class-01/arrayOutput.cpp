#include<stdio.h>
int main(){
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;

}