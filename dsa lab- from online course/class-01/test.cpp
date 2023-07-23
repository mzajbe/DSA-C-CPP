#include<stdio.h>
int main(){
    int n,i;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("\n\nenter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\nbefore insertion array:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n\nenter insertion item:");
    int item;
    scanf("%d",&item);

    int position=n;
    for(i=0;i<n;i++){
        if(arr[i]>item){
            position = i;
            break;
        }
    }
    for(i=(n-1);i>=position;i--){
        arr[i+1]=arr[i];
    }

    arr[position]=item;
    n++;

    printf("\n\nafter insertion item--");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}




//      10 20 30 40 50