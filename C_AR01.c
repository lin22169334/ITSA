#include <stdio.h>
    
int main(void) {    
    int arr[100];    
    int i=0;    
    int a;  
    while(scanf("%d ",&a)!=EOF){    
        arr[i++]=a;  
    }    
    int j;    
    for(j=i-1;j>=0;j--){    
        if(j==i-1)    
            printf("%d",arr[j]);    
        else    
            printf(" %d",arr[j]);    
    }    
    printf("\n");    
    return 0;    
}  