#include<stdio.h>

int main()
{
    int n,sum=0;
    
    printf("Enter size:");
    scanf("%d",&n);
    
    int a[n];
    
    int i;
    
    for(i=0; i<=4; i++){
        printf("Enter Elements [%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        sum+=a[i];
    }
    printf("%d\t",sum);
    return 0;
}