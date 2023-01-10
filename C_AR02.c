#include <stdio.h>
int main(void) {    
    int a[6];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(int j=5;j>=0;j--){    
        if(j==5)    
            printf("%d",a[j]);    
        else    
            printf(" %d",a[j]);    
    }
    printf("\n");   
    return 0;    
}  