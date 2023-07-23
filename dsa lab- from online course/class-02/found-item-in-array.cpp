#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int z = 10;
    int flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==z){
            flag = 1;
        }
    }
    if(flag==0){
            printf("not found");
        }
        else{
            printf("found");
        }

    return 0;
}