#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elememts -> ");
    scanf("%d",&n);
    int arr[n];

   printf("enter the elements\n");

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}


for(int i=0;i<(n/2);i++){
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=  temp;  
}

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

    return 0;
}