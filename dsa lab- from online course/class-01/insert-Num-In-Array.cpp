#include<stdio.h>
int main(){
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nbrfore insertion: ");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int item;
    printf("\n\nenter item to insert:");
    scanf("%d",&item);

    int position = n;
    for (int i=0;i<n;i++){
        if(item<arr[i]){
            position = i;
            break;
        }
    }

    for(int i=(n-1);i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=item;
    n++;

    printf("\n\nposition:%d",position);

    printf("\n\nafter insertion:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;

}