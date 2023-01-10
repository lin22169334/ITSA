#include <stdio.h>
int cube(int a){
    return a*a*a;
}
int main(void) {    
    int a[6];
    int sum=0;
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<6;i++){
        sum+=cube(a[i]);
    }
    printf("%d\n",sum);
    return 0;    
}  