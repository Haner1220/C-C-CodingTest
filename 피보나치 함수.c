#include <stdio.h>
#include <stdlib.h>
int main() {
  int n=40, c0, c1;
  int dp0[41] = {1, 0, 1};
  int dp1[41] = {0, 1, 1};
  for (int j = 3; j <= n; j++) {
    dp0[j] = dp0[j-1] + dp0[j-2];
    dp1[j] = dp1[j-1] + dp1[j-2];
  }
  n=0;
  scanf("%d",&n);
  int testcase[10000]={};
  for(int j=0;j<n;j++){
    int x;
    scanf("%d",&x);
    testcase[j]=x;
  }
  for(int j=0;j<n;j++){
    printf("%d %d\n", dp0[testcase[j]],dp1[testcase[j]]);
  }
}