#include<stdio.h>
#include<stdlib.h>
int main(){
    char card[100][100];
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%*[ ]");
        scanf("%[0-9AJKQ]",card[i]);
    }
    for(int i=0;i<5;i++){
        if(card[i][0]=='A'){
            sum+=14;
        }
        else if(card[i][0]=='J'){
            sum+=11;
        }
        else if(card[i][0]=='Q'){
            sum+=12;
        }
        else if(card[i][0]=='K'){
            sum+=13;
        }
        else{
            sum+=atoi(card[i]);
        }
    }
    printf("%d\n",sum);
    return 0;
}