#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=a-1-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}