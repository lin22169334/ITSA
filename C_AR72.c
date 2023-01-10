#include<stdio.h>

int main(){
    int number;
    int money[100];
    int adult,kid;
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        scanf("%d%d",&adult,&kid);
        money[i]=adult*250+kid*175;
    }
    for(int i=0;i<number;i++){
        printf("%d\n",money[i]);
    }
    return 0;
}