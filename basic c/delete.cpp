#include<stdio.h>
int main(){
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];

    printf("enter array numbers:");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max,min;
    max = arr[0];
    min = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("maximum:%d\n",max);
    printf("minimum:%d\n",min);

    


    return 0;

}