#include <stdio.h>

int main(){
    int n;
    printf("Enter no. of integers:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Avg:%lf",sum/n);
    return 0;

}
