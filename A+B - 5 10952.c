#include <stdio.h>
int main(){
    while(1){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a+b!=0){
            printf("%d\n",a+b);
        }else{
            break;
        }
    }
    return 0;
}