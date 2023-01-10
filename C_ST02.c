#include<stdio.h>
#include<string.h>
int main(){
    int number;
    int eachlength[100];
    char stringlist[100][300];
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        scanf("%s",stringlist[i]);
        eachlength[i]=strlen(stringlist[i]);    //紀錄每個字串的長度
    }
    for(int i=0;i<number;i++){
        for(int j=eachlength[i]-1;j>=0;j--){
            printf("%c",stringlist[i][j]);
        }
        printf("\n");
    }
    return 0;
}