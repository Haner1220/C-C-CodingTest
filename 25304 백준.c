#include <stdio.h>

int main(void) {
  int equal;
  int result=0;
  int x;
  scanf("%d",&equal);
  scanf("%d",&x);
  for(int i=0;i<x;i++){
    int a,b;
    scanf("%d %d",&a,&b);
    result+=a*b;
  }
  if(equal==result){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}