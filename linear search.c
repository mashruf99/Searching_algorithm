#include<stdio.h>
int main()
{
    int a[10],s,j,i,c=0;
    for( i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    printf("Search this element : ");
    scanf("%d",&s);

        for(j=0; j<10; j++){
            if(a[j]==s){
                return printf("%d is found in a[%d] index",s,j);
            }
        }

    return 0;
}
