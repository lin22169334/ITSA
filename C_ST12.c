#include<stdio.h>

int main(){
    int a,b,c;          //c為ab的差
    scanf("%d%d",&a,&b);
    c=a-b;
    if(c<0){
        c=b-a;
        for(int startcount=a;startcount<=b;startcount++){
            for(int j=1;j<=startcount;j++){
                printf("*");
            }
            printf("\n");
        }               
    }
    else{
        for(int startcount=a;startcount>=b;startcount--){
            for(int j=1;j<=startcount;j++){
                printf("*");
            }
            printf("\n");
        }    
    }

    return 0;
}