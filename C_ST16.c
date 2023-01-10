#include<stdio.h>
#include<string.h>
int main(){
    int number;
    int length;
    char numberlist[100];
    scanf("%d",&number);
    sprintf(numberlist,"%d",number);
    length=strlen(numberlist);
    for(int i=0;i<length;i++){
        if(i==0){
            printf("%c",numberlist[i]);
        }
        else{
            printf("   %c",numberlist[i]);
        }
    }
    printf("\n");
    return 0;
}