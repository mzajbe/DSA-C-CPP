//1+2+3+4+5+.....

#include<stdio.h>

int sumationUpToN(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}

int summationUpToNFormula(int n)
{
    return (n*(n+1))/2;
}


int main(){
    int n;
    printf("How many numbers:");
    scanf("%d",&n);
    int sum = summationUpToNFormula(n);
    int sum2 = sumationUpToN(n);
    printf("%d\n",sum);
    printf("%d",sum2);
    return 0;

}