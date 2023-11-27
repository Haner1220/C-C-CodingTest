#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, cnt = 0;
  int min = 1000001, max = -1000001;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);
  while (scanf("%d", &arr[cnt])) {
    cnt++;
    if(cnt==n){
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  printf("%d %d",min,max);
}