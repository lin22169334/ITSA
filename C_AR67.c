#include<stdio.h>

int main(){
    int a[6];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(j==0){
                printf("%03d",a[j]*a[i]);       ////输出3位十進制整數 左邊補0
            }
            else{
                printf(" %03d",a[j]*a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}