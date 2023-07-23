#include<stdio.h>
#include <cstdlib>
int main(){
    int arr[100];
    int item,flag=0;
    
    for(int i=0;i<100;i++){
        arr[i]=rand() % 1000;

    }

    for(int i=0;i<100;i++){
        printf("%d ",arr[i]);
    }

    printf("\n\nenter item: ");
    scanf("%d",&item);

    for(int i=0;i<100;i++){
        if(arr[i]==item){
            flag=1;
        }
    }
    if(flag==0){
        printf("item not found");
    }
    else{
        printf("item found");
    }

    
}