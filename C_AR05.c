#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int max=0;
    int depart[50];
    int arrive[50];
    int time[50]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&depart[i],&arrive[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=depart[i];j<arrive[i];j++){       //time[i]表示當下有多少車在使用
            time[j]++;
        }
    }
    for(int i=1;i<=24;i++){
        if(time[i]>max){
            max=time[i];
        }
    }
    printf("%d\n",max);
    return 0;
}