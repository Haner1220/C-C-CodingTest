#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int T;
  scanf("%d",&T);
  int *size = &T;
  int* arr = (int*)malloc(sizeof(int) * *size);
  for(int i=0;i<T;i++){
    int a,b;
    scanf("%d %d",&a,&b);
    arr[i]=a+b;
  }
  for(int i=1;i<=T;i++){
    printf("Case #%d: %d\n",i,arr[i-1]);
  }
  
  return 0;
}