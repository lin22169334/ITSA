#include<stdio.h>
int sum(int a[100][100],int b[100][100],int i,int j,int m2){    //m2為每個要乘的行列共有幾個數字
    int mul=0;
    for(int k=0;k<m2;k++){
        mul+=a[i][k]*b[k][j];
    }
    return mul;
}
int main(){
    int m1,n1;
    int a[100][100];
    scanf("%d%d",&m1,&n1);
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int m2,n2;
    int b[100][100];
    scanf("%d%d",&m2,&n2);
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[100][100];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            c[i][j]=sum(a,b,i,j,m2);
        }
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            if(j==0){
                printf("%d",c[i][j]);
            }
            else{
                printf(" %d",c[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}