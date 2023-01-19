#include<stdio.h>
int main() {
    int size;
    printf("Enter the array size : \n");
    scanf("%d",&size);
    int a[size],j,mid,target,i,m,low,high;
    printf("Enter the array elements : \n");
    for(i=0; i<size; i++) {
        scanf("%d",&a[i]);
    }


    m=a[0];
    for(i=0; i<size; i++) {
        for(j=i+1; j<size; j++) {
            if(a[i]>a[j]) {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }


    printf("Enter the array want to search : \n");
    scanf("%d",&target);
    printf("\n");



    low=0;
    high=size-1;
    while(low<=high) {
        mid=(low+high)/2;
        if(a[mid]==target) {
            printf("Value is in %d",mid+1);
            return 0;
        } else if( a[mid]<target ) {
            low=mid+1;
        } else {
            high=mid-1;
        }
    }
    printf("NO value found\n");



    return 0;
}
