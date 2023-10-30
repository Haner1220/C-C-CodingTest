#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  scanf("%d", &i);
  int *result = (int *)malloc(sizeof(int) * i); //배열 동적 할당

  for (int j = 0; j < i; j++) {
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    double radiusHap = r1 + r2; //두 원의 반지름의 합
    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); //두 원의 중심의거리
    if (d < radiusHap && d > sqrt(pow(r1 - r2, 2))) {
      result[j] = 2;
    }else if(d == radiusHap ||( (d == sqrt(pow(r1 - r2, 2))) && r1 != r2)) {
      result[j] = 1;
    }else if(d > radiusHap || d < sqrt(pow(r1 - r2, 2)) || (d == 0 && r1 != r2)) {
      result[j] = 0;
    } else if(d==0 && r1==r2){
      result[j] = -1;
    }
  }
  for (int j = 0; j < i; j++) {
    printf("%d\n", result[j]);
    }
  
}