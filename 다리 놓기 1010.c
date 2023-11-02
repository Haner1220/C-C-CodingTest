#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    int n, r, result = 1, x = 1;
    scanf("%d %d", &r, &n);
    for (int j = n; j > (n - r); j--) {
      result *= j;
      if (x <= r && result % x == 0) {
        result /= x;
        x += 1;
      }
    }
    printf("%d\n", result);
  }
  return 0;
}