#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0){
        n--;
    }
    for(int i=1,startcount=1;i<=n/2;i++,startcount+=2){     //上半部
        for(int j=1;j<=(n-startcount)/2;j++){
            printf(" ");
        }
        for(int k=1;k<=startcount;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){                      //中間那排*號有n個
        printf("*");
    }
    printf("\n");
    for(int i=1,startcount=n-2;i<=n/2;i++,startcount-=2){       //下半部
        for(int j=1;j<=(n-startcount)/2;j++){
            printf(" ");
        }
        for(int k=1;k<=startcount;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}