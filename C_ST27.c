#include<stdio.h>

int main(){
    int a;
    int b[130];
    int only[130];          //因為陣列已排序所以判斷一個數字如果不等於當時陣列最後一個數時就存進去
    int current=0;            //當前最後一個位置
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    only[0]=b[0];
    for(int i=1;i<a;i++){
        if(b[i]!=only[current]){
            only[++current]=b[i];
        }
    }
    for(int i=0;i<=current;i++){
        if(i==0){
            printf("%d",only[i]);
        }
        else{
            printf(" %d",only[i]);
        }
    }
    printf("\n");
    return 0;
}