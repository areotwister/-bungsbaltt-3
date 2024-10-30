#include <stdint.h>
#include <stdio.h>

int main() {
  int32_t var = -21846;
  int32_t mul_res = var * 65536;
  int32_t or_res = mul_res | 52428;
  printf("var = %d\n", or_res);
  int32_t num = -1431655766;
  printf("var = %d\n", num);
  int32_t num2 = 1431655766;
  printf("var = %d\n", num2);
}
