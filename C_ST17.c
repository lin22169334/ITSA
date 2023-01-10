#include<stdio.h>
#include<string.h>
int main(){
    int number;
    char numberlist[100];       //把整數存成字元陣列
    int length;                 //有幾位數
    scanf("%d",&number);
    sprintf(numberlist,"%d",number);    //將整數轉成字串
    length=strlen(numberlist);
    for(int i=0,inverse=length-1;i<length;i++,inverse--){
        if(numberlist[i]!=numberlist[inverse]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}