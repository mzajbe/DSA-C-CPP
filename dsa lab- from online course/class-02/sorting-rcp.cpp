#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int arr[100];
    for(int i=0;i<100;i++){
        arr[i]= rand() % 1000 + 1;

    }

    printf("\n\nbefore sorting\n\n");
    for(int i=0;i<100;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<100;i++){
        
        for(int j=i+1;j<100;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;   
        }
    }  
}

printf("\n\nafter sorting\n\n");
for(int i=0;i<100;i++){
    printf("%d ",arr[i]);
}



return 0;

}