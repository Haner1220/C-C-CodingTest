#include <stdio.h>
#include <stdlib.h> // 배열 동적 메모리 할당을 위해 필요한 헤더 파일
int power(int a, int b) {
  int result = 1;
  for (int j = 0; j < b; j++) {
    result = (result * a) % 10; //제곱수의 끝자리만 계산
    if(result==0){
      result=10;
      return result;
    }
  }
  return result; //포인터 사용 없이 진행
}
int main() {
  int t;
  scanf("%d", &t);
  int *size = &t;
  int *result = (int *)malloc(sizeof(int) * (*size)); //동적 메모리 할당을 위해 malloc 함수 사용 result의 주소에 (4byte * t 주소 크기 대입)
  for (int i = 0; i < t; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    result[i] = power(a, b);
  }
  for (int i = 0; i < t; i++) {
    printf("%d\n", result[i]);
  }
}