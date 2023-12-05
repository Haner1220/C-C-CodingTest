#include <stdio.h>
int main(){
  int fibo[47]={0,0,1,1};
  for(int i=4; i<=46; i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
  }
  int n;
  scanf("%d",&n);
  printf("%d",fibo[n+1]);
}