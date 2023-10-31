#include <stdio.h>
int main() {
  int A,B;
  scanf("%d %d", &A,&B);
  double result = (double) A/B; //즉석 형 변환 방법
  printf("%.17f",result); //17자리까지 표기
}